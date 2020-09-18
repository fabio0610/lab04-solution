//
// Created by Maikol Guzman on 8/26/20.
//

#ifndef LAB04_SOLID_SOLUTION_ISAVEGAME_H
#define LAB04_SOLID_SOLUTION_ISAVEGAME_H

#include <sstream>

class ISaveGame {
public:
    virtual ~ISaveGame();

    virtual std::string saveData() = 0;
};


#endif //LAB04_SOLID_SOLUTION_ISAVEGAME_H
