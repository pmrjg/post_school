//
// Created by pmrj on 20-01-2025.
//

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

inline void func_run() {
    auto f = [](int arg) { return 2 * arg;};
    std::cout << "Calling f with arg 3 returns " << f(3) << std::endl;

    int n = 3;
    auto g = [&n](int arg) { return ++n * arg;};

    std::cout << "Capture variable " << g(3) << std::endl;

    int radix = 2;
    std::vector<int> vec{1,2,3,4,5,6,7,8};
    auto n_even = std::count_if(vec.begin(), vec.end(), [radix](int i) { return i % radix == 0; });
    std::cout << "Even numbers " << n_even << std::endl;
}
