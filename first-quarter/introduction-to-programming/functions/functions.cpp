// This file contains an introduction to functions in C++.
#include <bits/stdc++.h>

// The anatomy of a function is as follows:
// <return type> <function name>(<parameters>) {}
void my_function() {
    std::cout << "Hello, World!" << std::endl;
}

// This is the main function. It's the entry point of the program.
int main() {
    int x = 10;

    // This is a lambda function. The brackets are empty because it doesn't take any parameters from the outer scope.
    // You cannot create recursive functions this way.
    auto my_lambda_function = []() {
        std::cout << "This is from `my_lambda_function`." << std::endl;
        // std::cout << x << std::endl; // This will throw an error because `x` is not in the scope of the lambda function.
    };

    // You can also use `std::function` to create lambda functions. This allows for recursion.
    // You may put parameters in the brackets if you'd like to include them from the outer scope.
    std::function<void()> my_lambda_function_two = [&x]() {
        std::cout << "This is from `my_lambda_function_two`." << std::endl;
        std::cout << x << std::endl; // This will not throw an error because `x` is in the scope of the lambda function.
    };

    // The following is a function call.
    my_function();            // Hello, World!
    my_lambda_function();     // This is from `my_lambda_function`.
    my_lambda_function_two(); // This is from `my_lambda_function_two`. 10
}
