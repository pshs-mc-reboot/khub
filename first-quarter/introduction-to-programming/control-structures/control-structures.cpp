// This file is an example of how control structures work in C++.
#include <bits/stdc++.h>

int main() {
    // The if statement is the most basic control structure.
    // It executes a block of code if the condition is true.
    // Otherwise, it skips the block of code.
    int x{1};
    if (x == 1) {
        std::cout << "x is equal to 1" << std::endl;
    }

    // The else statement is used in conjunction with the if statement.
    // It executes a block of code if the condition is false.
    // Otherwise, it skips the block of code.
    if (x == 2) {
        std::cout << "x is equal to 2" << std::endl;
    } else {
        std::cout << "x is not equal to 2" << std::endl;
    }

    // The else if statement is used in conjunction with the if statement.
    // It executes a block of code if the condition is false.
    // Otherwise, it skips the block of code.
    if (x == 2) {
        std::cout << "x is equal to 2" << std::endl;
    } else if (x == 3) {
        std::cout << "x is equal to 3" << std::endl;
    } else {
        std::cout << "x is not equal to 2 or 3" << std::endl;
    }

    // The switch statement is used to execute a block of code depending on the value of a variable.
    // It is similar to the else if statement, but it is more concise.
    switch (x) {
        case 1:
            std::cout << "x is equal to 1" << std::endl;
            break;
        case 2:
            std::cout << "x is equal to 2" << std::endl;
            break;
        case 3:
            std::cout << "x is equal to 3" << std::endl;
            break;
        default:
            std::cout << "x is not equal to 1, 2, or 3" << std::endl;
            break;
    }

    // The while statement is used to execute a block of code while the condition is true.
    // It is similar to the if statement, but it is used to execute a block of code repeatedly.
    while (x < 4) {
        std::cout << "x is less than 4" << std::endl;
        x++;
    }

    // The do while statement is used to execute a block of code while the condition is true.
    // It is similar to the while statement, but it is used to execute a block of code before checking the terminating condition.
    do {
        std::cout << "x is less than 4" << std::endl;
        x++;
    } while (x < 4);

    // The for statement is used to execute a block of code a certain number of times.
    // It is similar to the while statement, but it is used to execute a block of code while manipulating a certain value.
    // Additionally, the value that you declare in the first part of the for loop is only accessible within the for loop. Remember scopes?
    for (int i{0}; i < 4; i++) {
        std::cout << "i is less than 4" << std::endl;
    }

    // The below is similar to the while loop above
    for (; x < 4; x++) {
        std::cout << "x is less than 4" << std::endl;
    }
}