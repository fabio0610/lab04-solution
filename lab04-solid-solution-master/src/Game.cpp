//
// Created by Maikol Guzman on 8/26/20.
//

#include "Game.h"

Game::Game() {}

Game::Game(const std::string &name, double price, double tax) {
    setName(name);
    setPrice(price);
    setTax(tax);
}

Game::~Game() {

}

const std::string &Game::getName() const {
    return name;
}

void Game::setName(const std::string &name) {
    Game::name = name;
}

double Game::getPrice() const {
    return price;
}

void Game::setPrice(double price) {
    Game::price = price;
}

double Game::getTax() const {
    return tax;
}

void Game::setTax(double tax) {
    Game::tax = tax;
}

double Game::applyDiscount() const {
    return getPrice();
}

double Game::calculatePriceWithTax() const {
    double finalPrice = applyDiscount();
    return finalPrice + (finalPrice * getTax());
}

std::string Game::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << "Game Name: " << getName()
           << ", Price: $" << getPrice()
           << ", Price with Tax: $" << calculatePriceWithTax();
    return output.str();
}
