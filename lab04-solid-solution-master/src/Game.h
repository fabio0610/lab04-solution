//
// Created by Maikol Guzman on 8/26/20.
//

#ifndef MY_PROJECT_NAME_GAME_H
#define MY_PROJECT_NAME_GAME_H

#include <sstream>
#include <iomanip>

class Game {
public:
    Game();
    Game(const std::string &name, double price, double tax);

    virtual ~Game();

    const std::string &getName() const;

    void setName(const std::string &name);

    double getPrice() const;

    void setPrice(double price);

    double getTax() const;

    void setTax(double tax);

    virtual double calculatePriceWithTax() const;
    virtual std::string toString() const; // Virtual
private:
    std::string name;
    double price;
    double tax;

    // methods
    virtual double applyDiscount() const;
};


#endif //MY_PROJECT_NAME_GAME_H
