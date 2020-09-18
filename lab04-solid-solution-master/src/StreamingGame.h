//
// Created by Maikol Guzman on 8/26/20.
//

#ifndef MY_PROJECT_NAME_STREAMINGGAME_H
#define MY_PROJECT_NAME_STREAMINGGAME_H

#include <sstream>
#include "Game.h"
#include "ISaveGame.h"
#include "IReplaceable.h"

class StreamingGame: public Game, public ISaveGame, public IReplaceable {
public:
    StreamingGame();

    StreamingGame(const std::string &name, double price, double tax, const std::string &urlPath);

    const std::string &getUrlPath() const;

    void setUrlPath(const std::string &urlPath);

    std::string toString() const override;

    std::string saveData() override;

    std::string processMessage() override;

private:
    std::string urlPath;
};


#endif //MY_PROJECT_NAME_STREAMINGGAME_H
