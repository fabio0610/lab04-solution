//
// Created by Maikol Guzman on 8/26/20.
//

#ifndef MY_PROJECT_NAME_PHYSICALGAME_H
#define MY_PROJECT_NAME_PHYSICALGAME_H

#include <sstream>
#include "Game.h"
#include "ISaveGame.h"
#include "IShippable.h"

class PhysicalGame : public Game, public ISaveGame, public IShippable {
public:
    PhysicalGame();

    PhysicalGame(const std::string &name, double price, double tax, double itemWeight,
                 const std::string &productDimensions);

    double getItemWeight() const;

    void setItemWeight(double itemWeight);

    const std::string &getProductDimensions() const;

    void setProductDimensions(const std::string &productDimensions);

    std::string toString() const override;

    std::string saveData() override;

    std::string processMessage() override;

private:
    double itemWeight;
    std::string productDimensions;
};


#endif //MY_PROJECT_NAME_PHYSICALGAME_H
