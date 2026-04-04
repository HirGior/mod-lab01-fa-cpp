// Copyright 2022 UNN-IASR
#include "fun.h"
#include "iostream"

int main() {
    const char* str = "Hello world test123 ABC test";

    std::cout << "faStr1: " << faStr1(str) << std::endl;
    std::cout << "faStr2: " << faStr2(str) << std::endl;
    std::cout << "faStr3: " << faStr3(str) << std::endl;
    return 0;
}
