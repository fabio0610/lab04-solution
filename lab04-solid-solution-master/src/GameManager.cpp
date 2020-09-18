//
// Created by Maikol Guzman on 8/26/20.
//

#include <iomanip>
#include <fstream>
#include "GameManager.h"

void GameManager::save(ISaveGame *saveGame, const std::string &filename) {
    std::ofstream file (filename, std::ofstream::out);

    file << saveGame->saveData();

    file.close();
}

std::string GameManager::read(const std::string &filename) {
    std::string txtContent;

    try {
        std::ifstream file (filename);
        file.exceptions ( std::ifstream::failbit | std::ifstream::badbit );

        std::stringstream buffer;
        buffer << file.rdbuf();
        std::string fileContent(buffer.str());
        txtContent = fileContent;
    }
    catch (std::ifstream::failure e) {
        throw std::runtime_error("Exception opening/reading/closing file");
    }

    return txtContent;
}

std::string GameManager::purchase(IReceiptSender *receiptSender) {
    return receiptSender->sendReceipt();
}