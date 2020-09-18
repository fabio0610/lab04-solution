//
// Created by Maikol Guzman on 8/27/20.
//

#include <PhysicalGame.h>
#include <GameManager.h>
#include <EmailReceiptSender.h>
#include <PrintReceiptSender.h>
#include <ScreenReceiptSender.h>
#include <DigitalGame.h>
#include <StreamingGame.h>
#include "gtest/gtest.h"

/**
 * This test will verify the Send a receipt, namely, printing and sending via mail, sending via email, or
 * showing the receipt in the user account page on the platform.
 */
TEST(GameManagerTestSuite, Purchase) {
    IReceiptSender *emailReceiptSender = new EmailReceiptSender();
    IReceiptSender *printReceiptSender = new PrintReceiptSender();
    IReceiptSender *screenReceiptSender = new ScreenReceiptSender();

    GameManager gameManager;

    EXPECT_EQ(gameManager.purchase(emailReceiptSender), "Send receipt by Email");
    EXPECT_EQ(gameManager.purchase(printReceiptSender), "Print receipt");
    EXPECT_EQ(gameManager.purchase(screenReceiptSender), "Show receipt in screen");
}

/**
 * This test will verify the save information of Physical Game in a text file
 */
TEST(GameManagerTestSuite, SavePhysicalGame) {
    ISaveGame *physicalGame = new PhysicalGame("Call of Duty Infinite Warfare", 19.36, 0.13,
                                               2.82, "6.77 x 5.28 x 0.51 inches; "
                                                     "2.82 Ounces");

    GameManager gameManager;
    gameManager.save(physicalGame, "physicalGame.txt");

    std::string txtContent = gameManager.read("physicalGame.txt");

    EXPECT_EQ(txtContent, "Game Name: Call of Duty Infinite Warfare, Price: $19.36, "
                          "Price with Tax: $21.88, Item weight: 2.82 Ounces, "
                          "Product Dimension: 6.77 x 5.28 x 0.51 inches; 2.82 Ounces");
}

/**
 * This test will verify the save information of Digital Game in a text file
 */
TEST(GameManagerTestSuite, SaveDigitalGame) {
    ISaveGame *digitalGame = new DigitalGame("FIFA 20 Standard Edition", 24.39, 0.13,
                                             "C:\\fifa20.game");

    GameManager gameManager;
    gameManager.save(digitalGame, "digitalGame.txt");

    std::string txtContent = gameManager.read("digitalGame.txt");

    EXPECT_EQ(txtContent, "Game Name: FIFA 20 Standard Edition, Price: $24.39, "
                          "Price with Tax: $23.43, filePath: C:\\fifa20.game");
}

/**
 * This test will verify the save information of Streaming Game in a text file
 */
TEST(GameManagerTestSuite, SaveStreamingGame) {
    ISaveGame *streamingGame = new StreamingGame("Batman Arkham Collection (Standard Edition)", 30.83,
                                                 0.13, "http://batman.game");

    GameManager gameManager;
    gameManager.save(streamingGame, "streamingGame.txt");

    std::string txtContent = gameManager.read("streamingGame.txt");

    EXPECT_EQ(txtContent, "Game Name: Batman Arkham Collection (Standard Edition), "
                          "Price: $30.83, Price with Tax: $34.84, utlPath: http://batman.game");
}

/**
 * OPTION ONE: This test verify if the file not exist thrown an exception
 * This is the recommended option for unit test exceptions
 */
TEST(GameManagerTestSuite, FileNotFoundExceptionOptionOne) {

    GameManager gameManager;

    EXPECT_THROW({
                     std::string txtContent = gameManager.read("dummyFile.txt");
                 }, std::runtime_error);

}

/**
 * OPTION TWO: This test verify if the file not exist thrown an exception
 */
TEST(GameManagerTestSuite, FileNotFoundExceptionOptionTwo) {

    GameManager gameManager;

    try {
        std::string txtContent = gameManager.read("dummyFile.txt");
    } catch (std::runtime_error e) {
        EXPECT_STREQ("Exception opening/reading/closing file", e.what());
    }
}