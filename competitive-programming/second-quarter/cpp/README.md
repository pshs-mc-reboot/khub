# C++

For more complex problems that involve data structures and/or require fast runtimes, C++ is an important tool to have under your belt. Despite being more difficult to program (and debug in) compared to Python, C++ will get you a long way in your Competitive Programming journey. For one, if you're gunning for the IOI, C++ is the *only* language that they allow.

## Quick Note

When using C++ for competitive programming, the start of my file always includes the following: (this guide assumes that this is on top of your file in the following code snippets below)

```cpp
#include <bits/stdc++.h>
using namespace std;
```

It is important to note that `bits/stdc++.h` is a header file that has a lot of functionalities under its belt, and `using namespace std` allows us to not have to write `std::` after keywords like `cout`, `cin`, etc. However, these aren't good coding habits and should only be used in the competitive programming world.

## Variables

Variables in C++ are static-typed, which unlike Python, one needs to declare the type of the variable that will be used. A couple of examples are listed below:

```cpp
int discordCharacterLimit = 2000;
double PI = 3.14159265358979;
string myMessage = "Hello world";
```

You can also simultaneously declare two or more variables of the same data type as follows:

```cpp
int fibPrev = 5, fibCurr = 8;
```

## Input

In C++, we can use the `cin` keyword to take in input. It takes into account all characters until it reaches a white-space character (space, newline, etc.). The general syntax of taking in variables is as follows:

```cpp
cin >> variable1; // if one variable is needed
cin >> variable1 >> variable2 >> ... >> variableN; // if N ≥ 2 variables are needed
```

## Output

In C++, we can use the `cout` keyword for outputting. Literals are also allowed as part of the output. The general syntax of taking in variables is as follows:

```cpp
cout << variable1; // if one variable is needed
cout << variable1 << variable2 << ... << variableN; // if N ≥ 2 variables are needed
cout << "Hello, " << name << "!\n"; // literals are allowed, too
```

Note: escape sequences are useful for formatting outputs. The most commonly used characters are:

- `\n` (newline)
- `\t` (tab)
- `\\` (backslash)
- `\'` (single quote)
- `\"` (double quotes)

## If Statements

If there are specific conditions for a code to run, use the if statement. You can have an `if` statement, `if-else` chain, or an `if-"else-if"-else` chain.

In terms of syntax, a pair of opening and closing-parenthesis have to surround the conditions, and curly braces wrap around the process done *if* the condition is satisfied.

The general syntax for these three ways of implementing `if` statements are the following:

```cpp
// If Statement
if (condition1) {
    doSomething();
}

// If-Else Chain
if (condition1) {
    doSomething();
} else {
    doSomethingElse();
}

// If-"else-if"-else chain for N conditions
// Note that an "else" is optional
if (condition1) {
    doSomething1();
} else if (condition2) {
    doSomething2();
} else if (condition3) {
    doSomething3();
} 
...
else if (conditionN) {
    doSomethingN();
} else {
    doSomethingElse();
}
```

## Switch Statements

Whenever you want to check for specific values of a character or an integer, you can use a switch statement! 

A switch statement is a chain of "cases" that check whether a specific value `valueI` matches the value being checked `switchValue`. When they match, the process after the colon is executed.

Note that `valueI` must be a literal, and that a `break` statement must be used after every case, or else all the cases below the *matched case* will also trigger. 

For example, if we're checking whether or not the letter inputted is A or B:

```cpp
char characterInput;

cin >> characterInput;

switch (characterInput) 
{
    case 'A':
        cout << "It's an A!!!\n";
        break;
    case 'B':
        cout << "It's a B!!!\n";
        break;
    default:
        cout << "It's none of the above :(\n";
}
```

## Arrays versus Vectors

Vectors are oftenly used in competitive programming as a replacement of arrays, as they are more dynamic and can be used in a wider range of scenarios. 

However, when the data has a fixed size, and memory optimization is required, 

## For Loops

For-loops are often used whenever looping through an iterable data-type like lists, vectors, and others of the sort. There are two *very useful* ways of implementing a for-loop: iterator, and range-based.

### Iterator
This often has a structure of

```cpp
for (int variable = 0; variable < N; variable++) {
    doSomething();
}
```

where `N` is the number of times you want to run the loop (or usually, number of elements in an array that needs looping). In general syntax, it looks like this:

```
for (<variable declaration>; <condition>; <do everytime loop doesn't end>) {
    doSomething();
}
```

### Range-based
This often has a structure of

```cpp
for (auto element: iterable) {
    doSomething();
}
```

which essentially starts from iterable.begin(), then goes to the next one, and the next one, until it reaches iterable.end(), and terminates. This can also loop through data structures like sets, vectors, arrays, or anything with a `.begin()` and `.end()`.

## While Loops

A while-loop is used when one needs a piece of code to be executed again and again until a certain condition is met. There are two ways to implement this: `while`, and `do-while` loop.

They are similar in spirit, with the only difference being that `do-while` **always** does the piece of code first before checking the condition, while `while` always checks the condition before running the piece of code.

A `break` statement can be used to stop the loop as needed. This can also be used in the for-loop, but it is far more often used in the implementation of a `while` loop.

```cpp
// While loop
while (condition) {
    doSomething();
}

// Do-while loop
do {
    doSomething();
} while (condition); // note the required presence of a semicolon
```

## Functions
