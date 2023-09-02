// This file is an example of how keywords and operators work in C++.

// The include keyword is used to include the contents of another file in this file.
#include <bits/stdc++.h>

// The int keyword is used to declare an instance of the int class.
int x = 10;

// The main keyword is used to declare the main function.
// The int keyword before the main keyword is used to declare the return type of the main function.
// The () after the main keyword is used to declare the parameters of the main function.
// The {} after the () is used to declare the scope of the main function.
int main() {
    // The = operator is used to assign the value 20 to the variable x.
    int x = 20;

    {
        int x = 30;

        // The std::cout keyword is used to access the cout object from the std namespace.
        // The << operator is used to insert the value of x into the cout object.
        // The std::endl keyword is used to insert a newline character into the cout object.
        std::cout << x << std::endl; // 30
    }

    std::cout << x << std::endl; // 20

    // The return keyword is used to return the value 0 from the main function.
    return 0;
}
