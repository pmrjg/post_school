//
// Created by pmrj on 20-01-2025.
//

#pragma once
#include <iostream>

inline void f11(int&& x) {
    std::cout << x << "Rvalue reference." << std::endl;
}