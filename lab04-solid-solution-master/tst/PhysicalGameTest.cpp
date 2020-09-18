//
// Created by Maikol Guzman on 8/27/20.
//

#include <PhysicalGame.h>
#include "gtest/gtest.h"

/**
 * This test will check the calculate of price with tax
 */
TEST(PhysicalTestSuite, CalculatePriceWithTax){
    PhysicalGame physicalGame("Call of Duty Infinite Warfare", 19.36, 0.13, 2.82,
                              "6.77 x 5.28 x 0.51 inches; 2.82 Ounces");

    EXPECT_DOUBLE_EQ(physicalGame.calculatePriceWithTax(), 21.876799999999999);
}

/**
 * This test will verify if the product call the Shippable method
 */
TEST(PhysicalTestSuite, CheckShippable){
    PhysicalGame physicalGame("Call of Duty Infinite Warfare", 19.36, 0.13, 2.82,
                              "6.77 x 5.28 x 0.51 inches; 2.82 Ounces");

    EXPECT_EQ(physicalGame.processMessage(), "Ship the product");
}

/**
 * This test will verify the information in toString method
 */
TEST(PhysicalTestSuite, CheckToString){
    PhysicalGame physicalGame("Call of Duty Infinite Warfare", 19.36, 0.13, 2.82,
                              "6.77 x 5.28 x 0.51 inches; 2.82 Ounces");

    EXPECT_EQ(physicalGame.toString(),"Game Name: Call of Duty Infinite Warfare, Price: $19.36, "
                                      "Price with Tax: $21.88, Item weight: 2.82 Ounces, "
                                      "Product Dimension: 6.77 x 5.28 x 0.51 inches; 2.82 Ounces");
}