//
// Created by Maikol Guzman on 8/27/20.
//

#include <DigitalGame.h>
#include "gtest/gtest.h"

/**
 * This test will check the calculate of price with tax but with the DISCOUNT applied of 15% only to digital games
 */
TEST(DigitalGameTestSuite, CalculatePriceWithTax){
    DigitalGame digitalGame("FIFA 20 Standard Edition", 24.39, 0.13, "C:\\fifa20.game");

    EXPECT_DOUBLE_EQ(digitalGame.calculatePriceWithTax(), 23.426595);
}

/**
 * This test will verify if the product call the Replaceable method
 */
TEST(DigitalGameTestSuite, CheckReplaceable){
    DigitalGame digitalGame("FIFA 20 Standard Edition", 24.39, 0.13, "C:\\fifa20.game");

    EXPECT_EQ(digitalGame.processMessage(), "Replaceable Product");
}

/**
 * This test will verify the information in toString method
 */
TEST(DigitalGameTestSuite, CheckToString) {
    DigitalGame digitalGame("FIFA 20 Standard Edition", 24.39, 0.13, "C:\\fifa20.game");

    EXPECT_EQ(digitalGame.toString(),"Game Name: FIFA 20 Standard Edition, Price: $24.39, "
                                     "Price with Tax: $23.43, filePath: C:\\fifa20.game");
}
