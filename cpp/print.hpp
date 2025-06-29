// print.hpp
#pragma once
#include <iostream>

template<typename T>
void print_one(T val) {
    std::cout << val;
}

template<typename T, typename... Args>
void print(T first, Args... rest) {
    std::cout << first;
    (... , (std::cout << rest));
}
