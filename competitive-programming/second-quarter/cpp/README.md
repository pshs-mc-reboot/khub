# C++

For more complex problems that involve data structures and/or require fast runtimes, C++ is an important tool to have under your belt. Despite being more difficult to program (and debug in) compared to Python, C++ will get you a long way in your Competitive Programming journey. For one, if you're gunning for the IOI, C++ is the *only* language that they allow.

Unlike Python, C++ has a strict type system. In most cases, you must specify the type of the variable you are declaring, the types of the parameters to a function, the return type of a function, among others.

## Quick Note

When using C++ for competitive programming, the start of my file always includes the following: (this guide assumes that this is on top of your file in the following code snippets below)

```cpp
#include <bits/stdc++.h>
using namespace std;
```

It is important to note that `bits/stdc++.h` is a header file that has a lot of functionalities under its belt, and `using namespace std` allows us to not have to write `std::` after keywords like `cout`, `cin`, etc. However, these aren't good coding habits and should only be used in the competitive programming world.

Additionally, snippets below assume that the code is written in the `main` function. The `main` function is the entry point of the program. It is here where you will write the statements of your program. For example, consider the following snippet of code:

```cpp
int l = 0, r = 100, m;
int sqrt_arg;
cin >> sqrt_arg;

while(r - l > 1) {
    m = (l + r) >> 1;
    if(m * m > sqrt_arg) r = m;
    else l = m;
}

cout << l << endl;
```

Fully-expanded, this would look like:

```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
    int l = 0, r = 100, m;
    int sqrt_arg;
    cin >> sqrt_arg;

    while(r - l > 1) {
        m = (l + r) >> 1;
        if(m * m > sqrt_arg) r = m;
        else l = m;
    }

    cout << l << endl;
    return 0;
}
```

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

However, when the data has a fixed size, and memory optimization is required, normal c-style arrays may be used.

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
C++ functions are similar to [Python functions](../python/README.md#Functions). However, C++ functions require you to specify the return type as well as the type of the parameters.

```cpp
returnType my_function(type1 param1, type2 param2, type3 param3) {
    // Code
    return value; // Optional
}
```

For Example:

```cpp
int sum(int a, int b) {
    return a + b;
}

int main() {
    cout << sum(1, 2) << endl; // Outputs 3
    return 0;
}
```

To define a function with no return value, use the keyword `void`:

```cpp
void describe_dylan(string description) {
    cout << "Raphael Dylan Dalida is " << description << endl;
}

int main() {
    describe_dylan("cool"); // Prints "Raphael Dylan Dalida is cool"
    describe_dylan("smart"); // Prints "Raphael Dylan Dalida is smart"
    describe_dylan("now in MIT"); // Prints "Raphael Dylan Dalida is now in MIT"
    return 0;
}
```

### Multiple Outputs
To return multiple outputs from a function, you could use `std::pair` or `std::tuple`. I prefer the latter since it allows you to include more outputs.

```cpp
// This function multiplies a 3d vector by a scalar
tuple<int, int, int> scalar_vector_prod(tuple<int, int, int> a, int s) {
    // To access the ith item in a tuple (where i starts counting from 0), do std::get<i>(tuple)
    return {get<0>(a) * s, get<1>(a) * s, get<2>(a) * s};
}

int main() {
    int [x, y, z] = scalar_vector_prod({3, 1, 4}, 3);

    // Outputs "< 9, 3, 12 >"
    cout << "< " << x << ", " << y << ", " << z << " >";

    return 0;
}
```

To access the ith item of an `std::tuple`, you do `get<i>(my_tuple)`. **Be careful,** the value you pass in the angled brackets must be a compile-time constant value (i.e., its value must be determined once you compile the program). You cannot pass in a non-const variable since its value may change at runtime. However, you *may* pass an integer literal or a const variable. For instance, the following will fail:

```c++
tuple<int, int, int> a = {3, 1, 4};
int a_ind = 2;

cout << get<a_ind>(a) << endl;
```

However, the following will pass since `a_ind` is constant:

```c++
tuple<int, int, int> a = {3, 1, 4};
const int a_ind = 2; // We added const

cout << get<a_ind>(a) << endl; // Prints 4
```

### Passing Objects by Value
You may also pass objects into functions. For example, the following function prints the contents of a `std::vector<int>` (i.e., a `vector` of `int`s):

```c++
void print_vec(vector<int> v) {
    for(int ve : v) {
        cout << ve << " ";
    }
    
    cout << endl;
}

int main() {
    vector<int> my_vec;
    my_vec.push_back(1);
    my_vec.push_back(3);
    my_vec.push_back(6);
    print_vec(my_vec); // Prints "1 3 6"
    return 0;
}
```

### Passing Objects by Reference
While this does work, there's a subtle problem with this implementation. Whenever you pass in a value to a function, c++ **makes a copy of the argument**. In other words, the `print_vec` function actually copies the vector `v`. This is bad if the vector `v` contains a lot of elements (for instance, if it contains `200000` elements).

To tell C++ to not make a copy of the variable, add an ampersand (`&`) at the end of the type.

```c++
void print_vec(vector<int>& v) { // Add an "&" after "vector<int>"
    for(int ve : v) {
        cout << ve << " ";
    }
    
    cout << endl;
}
```

If you're not going to modify the argument (and I recommend not modifying the value of the argument), you may add `const` to the start of the parameter type:

```c++
void print_vec(const vector<int>& v) { // I recommend adding const and "&" for large objects
    for(int ve : v) {
        cout << ve << " ";
    }
    
    cout << endl;
}
```

I recommend always adding `const` if you're going to use `&`. Due to technical reasons, `c++` will only accept variables as input if you don't add `const`[^1]. However, if you add `const`, you can pass in both variables and expressions. For instance, the following will not work:

[^1]: Technically, `vector<int>&` will accept *l-value* integer vectors as input. Variables are an example of "l-values", while expressions are examples of "r-values". To pass in an *r-value*, you would use a double ampersand (i.e., `vector<int>&&`). However, I recommend just using `const vector<int>&` since that allows both *l-values* and *r-values*.

```c++
#include<bits/stdc++.h>
using namespace std;

void print_vec(vector<int>& v) { // No "const" keyword!
    for(int ve : v) {
        cout << ve << " ";
    }
    
    cout << endl;
}

int main() {
    vector<int> my_range = {1, 3, 6};
    print_vec(my_range); // This will work since my_range is a variable
    print_vec({1, 3, 6}); // This will NOT work since "{1, 3, 6}" is an expression
    
    return 0;
}
```

```c++
#include<bits/stdc++.h>
using namespace std;

void print_vec(const vector<int>& v) { // No "const" keyword!
    for(int ve : v) {
        cout << ve << " ";
    }
    
    cout << endl;
}

int main() {
    vector<int> my_range = {1, 3, 6};
    print_vec(my_range); // This will work
    print_vec({1, 3, 6}); // This will work
    
    return 0;
}
```

### Returning Objects from Functions
In most cases, you can return an object directly from a function:

```c++
vector<int> range(int start, int stop, int step) {
    vector<int> res;
    
    for(int i = start; i < stop; i += step) {
        res.push_back(i);
    }
    
    return res;
}

void print_vec(const vector<int>& v) {
    for(int ve : v) {
        cout << ve << " ";
    }
    
    cout << endl;
}

int main() {
    vector<int> my_range = range(2, 10, 3);

    print_vec(my_range);

    return 0;
}
```
