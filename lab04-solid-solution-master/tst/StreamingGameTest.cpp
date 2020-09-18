//
// Created by Maikol Guzman on 8/27/20.
//

#include <StreamingGame.h>
#include "gtest/gtest.h"

/**
 * This test will check the calculate of price with tax
 */
TEST(StreamingGameTestSuite, CalculatePriceWithTax) {
    StreamingGame streamingGame("Batman Arkham Collection (Standard Edition)", 30.83, 0.13,
                                "http://batman.game");

    EXPECT_DOUBLE_EQ(streamingGame.calculatePriceWithTax(), 34.8379);
}

/**
 * This test will verify if the product call the Replaceable method
 */
TEST(StreamingGameTestSuite, CheckReplaceable){
    StreamingGame streamingGame("Batman Arkham Collection (Standard Edition)", 30.83, 0.13,
                                "http://batman.game");

    EXPECT_EQ(streamingGame.processMessage(), "Replaceable Product");
}

/**
 * This test will verify the information in toString method
 */
TEST(StreamingGameTestSuite, CheckToString) {
    StreamingGame streamingGame("Batman Arkham Collection (Standard Edition)", 30.83, 0.13,
                                "http://batman.game");

    EXPECT_EQ(streamingGame.toString(),"Game Name: Batman Arkham Collection (Standard Edition), "
                                       "Price: $30.83, Price with Tax: $34.84, utlPath: http://batman.game");
}