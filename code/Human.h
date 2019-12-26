//
// Created by yuliyang on 2019/12/26.
//

#ifndef LEARNCPP_HUMAN_H
#define LEARNCPP_HUMAN_H

#include <iostream>

#endif //LEARNCPP_HUMAN_H

class Human {

public:
    std::string name = "";

    //生成默认构造函数
    Human() = default;

    explicit Human(std::string newName) : name(std::move(newName)) {

    }
};