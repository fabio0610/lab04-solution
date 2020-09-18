//
// Created by Maikol Guzman on 8/26/20.
//

#ifndef MY_PROJECT_NAME_PRINTRECEIPTSENDER_H
#define MY_PROJECT_NAME_PRINTRECEIPTSENDER_H


#include "IReceiptSender.h"

class PrintReceiptSender : public IReceiptSender {
    std::string sendReceipt() override;
};


#endif //MY_PROJECT_NAME_PRINTRECEIPTSENDER_H
