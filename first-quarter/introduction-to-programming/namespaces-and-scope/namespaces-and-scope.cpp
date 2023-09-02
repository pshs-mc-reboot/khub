// This file is an example of how namespaces and scope work in C++.
#include <bits/stdc++.h>

// This is the global namespace and scope. Everything declared here is accessible from anywhere in the program.
int x = 10;

int main() {
    // This is the main function's scope. Everything declared here is accessible from anywhere inside the main function.
    int x = 20;

    // This is the block scope. Everything declared here is accessible from anywhere inside the block.
    {
        int x = 30;
        std::cout << x << std::endl; // 30
    }

    std::cout << x << std::endl; // 20

    return 0;
}
