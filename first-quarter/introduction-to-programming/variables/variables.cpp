// This file is an example of how variables work in C++.
#include <bits/stdc++.h>

// One may declare variables in the global scope without assigning a vlue to it.
// The value of a variable declared in the global scope is by default defined by calling the type/contructor.
int x; // Same as calling int x = int();

// One may also declare variables in the global scope and assign a value to it.
int y = 10; // Same as calling int y(10);
int z(20);  // Same as calling int z = 20;
int a{40};  // Same as calling int a = {40};

// One may also declare multiple variable with the same data type.
// The same rules from above still apply.
int b, c, d, e;
int f(50), g{40}, h = 70;

int main() {
    // One may also declare variables in the local scope without assigning a value to it.
    // However, the value of a variable declared in the local scope is by default a garbage/meaningless value.
    int i;

    std::cout << "x: " << x << std::endl; // 0
    std::cout << "y: " << y << std::endl; // 10
    std::cout << "z: " << z << std::endl; // 20
    std::cout << "a: " << a << std::endl; // 40
    std::cout << "b: " << b << std::endl; // 0
    std::cout << "c: " << c << std::endl; // 0
    std::cout << "d: " << d << std::endl; // 0
    std::cout << "e: " << e << std::endl; // 0
    std::cout << "f: " << f << std::endl; // 50
    std::cout << "g: " << g << std::endl; // 40
    std::cout << "h: " << h << std::endl; // 70
    std::cout << "i: " << i << std::endl; // Some random number
}
