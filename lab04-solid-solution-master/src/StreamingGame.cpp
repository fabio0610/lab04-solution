//
// Created by Maikol Guzman on 8/26/20.
//

#include "StreamingGame.h"

StreamingGame::StreamingGame() {}

StreamingGame::StreamingGame(const std::string &name, double price, double tax, const std::string &urlPath) : Game(name,
                                                                                                                   price,
                                                                                                                   tax),
                                                                                                              urlPath(urlPath) {}

const std::string &StreamingGame::getUrlPath() const {
    return urlPath;
}

void StreamingGame::setUrlPath(const std::string &urlPath) {
    StreamingGame::urlPath = urlPath;
}

std::string StreamingGame::toString() const {
    std::ostringstream output;
    output << std::fixed << std::setprecision(2);
    output << Game::toString()
           << ", utlPath: " << getUrlPath();
    return output.str();
}

std::string StreamingGame::saveData() {
    return toString();
}

std::string StreamingGame::processMessage() {
    return "Replaceable Product";
}