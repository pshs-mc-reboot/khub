// This file contains an introduction to data types in C++.
#include <bits/stdc++.h>

int main() {
    // The following data types represent numbers.
    int a{10};
    long long b{20LL}; // The LL suffix tells the compiler to treat the number as a long long.
    float c{30.0F};    // The F suffix tells the compiler to treat the number as a float.
    double d{40.0};    // The compiler treats numbers with a decimal point as a double by default.

    std::cout << "a: " << a << std::endl;                         // 10
    std::cout << "b: " << b << std::endl;                         // 20
    std::cout << std::setprecision(5) << "c: " << c << std::endl; // 30.00000
    std::cout << std::setprecision(5) << "d: " << d << std::endl; // 40.00000

    // The following data types represent characters.
    char e{'a'};
    char f(60);  // Giving a number to a char data type will transform into the ASCII character associated with that number.

    std::cout << "e: " << e << std::endl; // a
    std::cout << "f: " << f << std::endl; // <

    // The following data types represent boolean values.
    bool g{true};
    bool h{false};

    std::cout << "g: " << g << std::endl; // 1
    std::cout << "h: " << h << std::endl; // 0

    // The following data types represent strings.
    std::string i{"Hello, World!"};

    std::cout << "i: " << i << std::endl; // Hello, World!

    // The following data types represent arrays.
    int j[5]{1, 2, 3, 4, 5};
    std::vector<int> k{1, 2, 3, 4, 5};

    std::cout << "j: ";
    for (int l = 0; l < 5; l++) {
        std::cout << j[l] << " ";
    }
    std::cout << std::endl; // 1 2 3 4 5

    std::cout << "k: ";
    for (int l = 0; l < 5; l++) {
        std::cout << k[l] << " ";
    }
    std::cout << std::endl; // 1 2 3 4 5

    // The following data types represent objects.
    // Objects are a way to group data and functions together.
    // We will cover objects in more detail in the next quarter.
    struct Person {
        std::string name;
        int age;
    };

    Person m{"John Doe", 20};

    std::cout << "m.name: " << m.name << std::endl; // John Doe
    std::cout << "m.age: " << m.age << std::endl;   // 20

    // The following data types represent pointers.
    // Pointers are a way to store the memory address of a variable.
    // We will cover pointers in more detail in the next quarter.
    int n{10};
    int* o{&n};

    std::cout << "n: " << n << std::endl;   // 10
    std::cout << "o: " << o << std::endl;   // A hexadecimal number representing the memory address of n
}
