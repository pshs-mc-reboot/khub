// This file is an example of how truthiness and falsiness work in C++.
#include <bits/stdc++.h>

int main() {
    // For integers, floats, and other numerical values, 0 is false and any other value is true.
    int x();
    std::cout << bool(x) << std::endl;  // 0

    int y{1};
    std::cout << bool(y) << std::endl;  // 1

    // Other data-types have their own truthiness and falsiness values.
    // They are expressed in some way so that it could be implicitly used as a bool.
    std::vector<int> v{};
    std::cout << v.empty() << std::endl;  // 1

    // Despite being only either 0 or 1, the bool data-type is a 8-bit.
    // However, this may differ according to the compiler's implementation.
}
