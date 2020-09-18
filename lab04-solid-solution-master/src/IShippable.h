//
// Created by Maikol Guzman on 8/26/20.
//

#ifndef MY_PROJECT_NAME_ISHIPPABLE_H
#define MY_PROJECT_NAME_ISHIPPABLE_H


#include <string>

class IShippable {
public:
    virtual ~IShippable();
    virtual std::string processMessage() = 0;
};


#endif //MY_PROJECT_NAME_ISHIPPABLE_H
