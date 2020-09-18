//
// Created by Maikol Guzman on 8/26/20.
//

#ifndef MY_PROJECT_NAME_IRECEIPTSENDER_H
#define MY_PROJECT_NAME_IRECEIPTSENDER_H

#include <sstream>

class IReceiptSender {
public:
    virtual ~IReceiptSender();

    virtual std::string sendReceipt() = 0;
};


#endif //MY_PROJECT_NAME_IRECEIPTSENDER_H
