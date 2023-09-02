// This file is an example of how boolean operations work in C++.
#include <bits/stdc++.h>

int main() {
    // Boolean operations are similar to logic gates, which lie at the heart of low-level computing.

    // The AND operation (represented in C++ via '&&') returns 'true' when both sides of the operation are 'true'
    std::cout << (true && true) << std::endl; // true
    std::cout << (false && true) << std::endl; // false
    std::cout << (false && false) << std::endl; // false

    // The OR operation (represented in C++ via '||') returns 'true' when one or both sides of the operation is 'true'
    std::cout << (true || true) << std::endl; // true
    std::cout << (true || false) << std::endl; // true
    std::cout << (false || false) << std::endl;

    // The NOT operation (represented in C++ via '!') returns the opposite value of the operand.
    std::cout << (!true) << std::endl; // false
    std::cout << (!false) << std::endl; // true

    // Boolean operations can be combined to make more complex operations
    std::cout << ((true && !false) || false) << std::endl; // true
}


// FOOTNOTE: Every output signified with "false" technically outputs a 0, and output signified with "true" technically outputs 1 due to booleans being rooted in binary.