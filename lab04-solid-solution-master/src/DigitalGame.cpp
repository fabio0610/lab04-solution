//
// Created by Maikol Guzman on 8/26/20.
//

#include "DigitalGame.h"

DigitalGame::DigitalGame() {}

DigitalGame::DigitalGame(const std::string &name, double price, double tax, const std::string &filePath) : Game(name,
                                                                                                                price,
                                                                                                                tax),
                                                                                                           filePath(
                                                                                                                   filePath) {}
const std::string &DigitalGame::getFilePath() const {
    return filePath;
}

void DigitalGame::setFilePath(const std::string &filePath) {
    DigitalGame::filePath = filePath;
}

std::string DigitalGame::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << Game::toString()
           << ", filePath: " << getFilePath();
    return output.str();
}

double DigitalGame::applyDiscount() const {
    return getPrice() - (getPrice() * 0.15);
}

std::string DigitalGame::saveData() {
    return toString();
}

std::string DigitalGame::processMessage() {
    return "Replaceable Product";
}

