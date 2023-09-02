# Introduction to Programming

This article aims to be a language-agnostic introduction to programming. We aim to teach you:

1. Knowledge of concepts
2. Programming skills
3. Problem solving

## Types of programming languages

There are many different programming languages, each with their own syntax, features, and paradigms. However, we can broadly categorize them into two main types: compiled and interpreted languages.

### Compiled languages

Compiled languages are languages that require a special program called a compiler to translate the source code into executable code that can run on a specific platform. Compilers perform various checks and optimizations on the source code before turning it into executable code. Some examples of compiled languages are C, C++, Java, and Rust.

The main advantages of compiled languages are:

- They tend to run faster and more efficiently than interpreted languages, as they are optimized for their target platforms.
- They offer more control over low-level details such as memory management and hardware access.
- They tend to have fewer runtime errors, as they are detected at compile time.

The main disadvantages of compiled languages are:

- They require more time and effort to compile and debug, as they have to be recompiled every time a change is made to the source code.
- They are less portable and flexible than interpreted languages, as they largely depend on the availability of a compiler and a compatible platform.
- They tend to have a steeper learning curve and more complex syntax than interpreted languages.

### Interpreted languages

Interpreted languages are languages that do not require a compiler, but rather rely on a special program called an interpreter to execute the source code directly. The interpreter reads and evaluates the source code line by line at runtime. Some examples of interpreted languages are Python, Ruby, JavaScript, and PHP.

The main advantages of interpreted languages are:

- They are easier and faster to write and debug, as they do not require compilation and can be modified on the fly.
- They are more portable and flexible than compiled languages, since they're able to run on any platform with an interpreter installed.
- They tend to have a simpler and more expressive syntax than compiled languages.

The main disadvantages of interpreted languages are:

- They tend to run slower and less efficiently than compiled languages; needing to interpret the source code line-by-line every execution.
- They offer less control over low-level details such as memory management and hardware access.
- They tend to have more runtime errors, as they are not detected until the code is executed.

## Namespaces and scope

One of the most important concepts in programming are the ideas of  namespaces and scopes. A namespace is a **collection of names** that are used to identify variables, functions, classes, modules, or other entities in a program. A scope is **the region of a program** where a name is valid and can be accessed.

Namespaces and scope help to organize the code and avoid name conflicts. If you have two variables with the same name in different parts of the program, they will not interfere with each other as long as they belong to different namespaces or scopes.

There are different types of namespaces and scopes in programming, such as `global`, `local`, `module`, `class`, `function`, etc. Global variables, for instance, can be accessed anywhere in the code, while variables in a function can only be accessed by that function.

The rules for defining and accessing namespaces and scopes vary depending on the programming language you use. However, some general principles are:

- A name can be defined only once in a namespace or scope.
- A name can be accessed from within the same namespace or scope, or from a nested (think an entity within an entity) namespace or scope.
- A name can be hidden or overridden by another name with the same identifier in a more specific namespace or scope (which is done through nesting).
- A name can be imported or exported from one namespace or scope to another using special keywords or syntax.

## Keywords and operators

Another important concept in programming is the idea of keywords and operators. A keyword is a **reserved word** that has a special meaning in a programming language. An operator is a **symbol that represents an operation** that can be applied to one or more operands.

Keywords and operators help to express and manipulate information in a program. For example, if you want to perform arithmetic operations on numbers, or logical operations on booleans, or string operations on text, you will need to use different types of keywords and operators.

There are different types of keywords and operators in programming, such as `arithmetic`, `comparison`, `logical`, `assignment`, `bitwise`, `string`, `list`, `dictionary`, `object`, etc. The rules for defining and using keywords and operators vary depending on the programming language you use. However, some general principles are:

- A keyword or operator can be used only in certain contexts, such as an expression, a statement, or a declaration.
- A keyword or operator can be used only with certain types of operands, such as numbers, booleans, strings, lists, etc.
- A keyword or operator can be combined with other keywords or operators to form more complex expressions or statements.
- A keyword or operator can be overloaded to perform different operations depending on the type of operands, although this is not always possible.

## Variables and data types

Another fundamental concept in programming is the idea of variables and data types. A variable is a **name that refers to a value** that can be stored, changed, or manipulated in a program. A data type is a **category of values** that determines what kind of operations can be performed on them.

Variables and data types help to represent and manipulate information in a program. For example, if you want to store a number, a text, or a logical value in a program, you will need to use different types of variables and data types.

There are different types of variables and data types in programming, such as `integers`, `strings`, `booleans`, `lists`, `dictionaries`, `objects`, etc. The rules for defining and using variables and data types vary depending on the programming language you use. However, some general principles are:

- A variable must be declared before it can be used in a program.
- A variable can be assigned a value using an assignment operator (most commonly used is `=`, although this could differ depending on the programming language).
- A variable can be reassigned a different value using the same operator.
- A variable can have only one data type at a time, but it can change its data type by assigning a value of a different type (at least, in dynamic programming languages).
- A data type defines what kind of operations can be applied to a variable, such as arithmetic, comparison, concatenation, indexing, slicing, etc.

### Types of programming languages (continued)

As a continuation of the previous section, we will now discuss the different types of programming languages with regards to how it lets the programmer declare variables and data types.

#### Statically-typed languages

Statically-typed languages are languages that require the programmer to declare the type of a variable before it can be used. The compiler or interpreter will then check if the variable is assigned a value of the correct type, and will raise an error if it is not. Some examples of statically-typed languages are C, C++, Java, and Rust.

The main advantages of statically-typed languages are:

- They tend to have fewer runtime errors, as they are detected at compile time.
- They tend to have better performance, as they are optimized for their target platforms.
- They tend to have better tooling, as they have more information about the program at compile time.

The main disadvantages of statically-typed languages are:

- They require more time and effort to write and debug, as they have to be recompiled every time a change is made to the source code.
- They are less flexible than dynamically-typed languages, as they do not allow the programmer to change the type of a variable at runtime.
- They tend to have a steeper learning curve and more complex syntax than dynamically-typed languages.
- They tend to have more verbose syntax than dynamically-typed languages.

#### Dynamically-typed languages

Dynamically-typed languages are languages that do not require the programmer to declare the type of a variable before it can be used. Some examples of dynamically-typed languages are Python, Ruby, JavaScript, and PHP.

The main advantages of dynamically-typed languages are:

- They are easier and faster to write and debug, as they do not require compilation and can be modified on the fly.
- They are more flexible than statically-typed languages, as they allow the programmer to change the type of a variable at runtime.
- They tend to have a simpler and more expressive syntax than statically-typed languages.

The main disadvantages of dynamically-typed languages are:

- They tend to have more runtime errors, as they are not detected until the code is executed.
- They tend to run slower and less efficiently than statically-typed languages, as they have to check the type of a variable at runtime.
- They offer less control over low-level details such as memory management and hardware access.

### Basic data types

To illustrate the concept of data types, let us look at some examples of variables and data types in Python, a popular and versatile programming language. Python has several built-in data types, such as:

- `int`: This data type represents integer numbers, such as 1, 2, 3, -5, 0, etc. You can perform arithmetic operations on integers, such as addition, subtraction, multiplication, division, etc.
- `float`: This data type represents decimal numbers, such as 3.14, 2.5, -0.01, etc. You can also perform arithmetic operations on floats, but be aware of the limitations of floating-point arithmetic, such as rounding errors and precision loss.
- `str`: This data type represents text or strings, such as "Hello", "Python", "123", etc. You can use single or double quotes to create strings in Python. You can perform string operations on strings, such as concatenation (joining two or more strings), slicing (extracting a part of a string), indexing (accessing a character in a string), etc.
- `bool`: This data type represents logical values or boolean values, such as True or False. You can use logical operators on booleans, such as and, or, not, etc. You can also compare values using comparison operators, such as == (equal to), != (not equal to), < (less than), > (greater than), etc.

### Truthiness and falsiness

Another important concept related to data types is truthiness and falsiness. This concept refers to how different values are evaluated as either true or false in a logical context, such as an if statement or a while loop. For example, in Python, the following values are considered false:

- The boolean value `False`
- The integer value `0`
- The float value `0.0`
- The empty string `""`
- The empty list `[]`
- The empty tuple `()`
- The empty dictionary `{}`
- The empty set `set()`
- The special value `None`

### Operations with booleans

To combine multiple boolean values or expressions, we can use logical operators. The most common logical operators are `and`, `or`, and `not`. These operators work as follows:

- `and` returns the boolean value that represents true if both operands are true, and the boolean value that represents false otherwise.
- `or` returns the boolean value that represents true if either operand is true, and the boolean value that represents false otherwise.
- `not` returns the opposite of the operand, i.e., the boolean value that represents true if the operand is false, and the boolean value that represents false if the operand is true.

For example, we can write something like this in pseudocode:

```python
a = true
b = false
c = a and b # False
d = a or b  # True
e = not a   # False
f = not b   # True
```

We can also use logical operators to combine more complex expressions, such as comparisons or function calls. For example:

```python
x = 10
y = 20
z = x < y and not (x == y)    # True
w = x + y > 30 or x * y < 200 # False
```

## Control structures and functions

Another important concept in programming is the idea of control structures and functions. Control structures are **statements that control the flow of execution** in a program. Functions are **blocks of code that perform a specific task** and can be reused in a program.

Control structures and functions help to organize and modularize a program. For example, if you want to execute a block of code only if a certain condition is true, or repeat a block of code a certain number of times, or define a block of code that can be called from different parts of the program, you will need to use different types of control structures and functions.

There are different types of control structures and functions in programming. Some common control structures are:

- `if` statements: They execute a block of code if a condition is true, and optionally another block of code if the condition is false.
- `switch` statements: They execute one of several blocks of code depending on the value of an expression.
- `for` loops: They execute a block of code a fixed number of times, usually based on a counter variable.
- `while` loops: They execute a block of code as long as a condition is true.
- `do-while` loops: They execute a block of code at least once, and then as long as a condition is true.
- `break` and `continue` statements: They allow you to exit or skip the current iteration of a loop.

The syntax and semantics for defining and using control structures and functions vary depending on the programming language you use. However, some general principles are:

- A control structure usually consists of a keyword, a condition or expression, and a (scoped) block of code enclosed by indentation or brackets.
- A control structure can be nested inside another control structure (nesting) to create more complex logic.
- A function usually consists of a keyword, a name, a list of parameters, and a (scoped) block of code enclosed by indentation or brackets.
- A function can be called by using its name and passing arguments that match its parameters.
- A function can return a value to the caller using the return statement, or return nothing by default.
