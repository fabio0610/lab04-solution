//
// Created by Maikol Guzman on 8/26/20.
//

#include "PhysicalGame.h"

PhysicalGame::PhysicalGame() {}

PhysicalGame::PhysicalGame(const std::string &name, double price, double tax, double itemWeight,
                           const std::string &productDimensions) : Game(name, price, tax), itemWeight(itemWeight),
                                                                   productDimensions(productDimensions) {}

double PhysicalGame::getItemWeight() const {
    return itemWeight;
}

void PhysicalGame::setItemWeight(double itemWeight) {
    PhysicalGame::itemWeight = itemWeight;
}

const std::string &PhysicalGame::getProductDimensions() const {
    return productDimensions;
}

void PhysicalGame::setProductDimensions(const std::string &productDimensions) {
    PhysicalGame::productDimensions = productDimensions;
}

std::string PhysicalGame::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << Game::toString()
           << ", Item weight: " << getItemWeight()
           << " Ounces, Product Dimension: " << getProductDimensions();
    return output.str();
}

std::string PhysicalGame::saveData() {
    return toString();
}

std::string PhysicalGame::processMessage() {
    return "Ship the product";
}
