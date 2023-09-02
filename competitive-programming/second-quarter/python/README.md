# Python

For simple problems that don't involve complicated data structures and don't require the program to be very fast, Python is a good choice. Python's syntax is concise and easily readable. In Python, you don't even need to use semicolons!

## Output

Usually, to output things in Python, we use the `print` function. This will display output in the terminal.

```python
# This is a comment
# This will not affect the code

# How to print "Hello World":
print("Hello World")
```

## Variables

A variable is a container that holds a value. In Python, you can declare a variable using the following syntax:

```python
my_message = "MISS KO NA SI- *gunshots*"
print(my_message) # Prints MISS KO NA SI- *gunshots*
```

Notice that you don't need to specify the data type. You don't even need to write `var` or `let` unlike in other programming languages. You just need to *write* the name of the variable, and that declares a new variable!

The syntax to reassign a new value into an existing variable is the same as the syntax for declaring a variable.

```python
my_message = "Hello CompProg world!"
print(my_message) # Prints Hello CompProg world!
my_message = "Raphael Dylan Dalida is the GOAT"
print(my_message) # Prints Raphael Dylan Dalida is the GOAT
```

You can also store other things into variables, such as numbers:

```python
my_num = 10
print(my_num) # Prints 10
```

Finally, you can change the data type stored in the variable at run time, although we do not recommend doing this.

```python
my_var = 10
print(my_var + 3) # Prints 13
my_var = "Among us"
print(my_var + " is a sustainable game") # Prints Among us is a sustainable game
```

## Strings

To represent a string in code, you could use the " or ' character:

```python
print("遠い夏の小さな記憶は") # Uses "
print('約束したのだ流れ星の下で') # Uses '
```

### Concatenation

You can combine strings with each other using concatenation, achieved by adding strings together using the plus sign `+`. 

```python
name = "Randolf"
age = "17"
print("My name is " + name + " and I am " + age + " years old") # This will output "My name is Randolf and I am 17 years old"
```

### f-strings

f-strings make it easier to interpolate values into strings. While concatenation only adds strings together, f-strings allows for values to be formatted into the string by surrounding them with `{curly braces}`.

```python
favorite_number = 65536
reason = "it is a power of two whose exponent is a power of two whose exponent is a power of two"
print("My favorite number is " + favorite_number + " because " + reason)
print(f"My favorite number is {favorite_number} because {reason}") # The output of these two print statements are the same
```

Notice that you can interpolate numbers into f-strings. You can also format decimals (henceforth, we will refer to decimals as **floats**).

```python
my_float = 1.12345678
print(f"{my_float:.3f}") # Print 1.123
```

**[🤓 WARNING]:** For more info, see the following [cheatsheet](https://fstring.help/cheat/).

## Lists

Python lists are a collection of values. They are useful for when you need to access an arbitrary value from the list quickly. You can also append values at the end of a list quickly. However, inserting values in the middle of the list is slow.

**[🤓 WARNING]:** Technically, Python lists are closer to dynamic arrays than linked lists. If you know C++, Python lists are closer to `std::vector` than `std::list`.

To represent a list of numbers, we use the following syntax:

```python
my_list = [3, 1, 4]
print(my_list[0]) # Prints 3
print(my_list[1]) # Prints 1
print(my_list[2]) # Prints 4
print(my_list[-1]) # Prints 4, since python interprets negative indexes as the nth number from the end of the list.
print(my_list[-2]) # Prints 1, since it's the second to the last item of the list
print(my_list[3]) # Throws an IndexError
```

You can get the length of a list in Python by using the `len` function.

```python
my_list = ["utsukushii", "no", "chandelier"]
print(len(my_list)) # Outputs 3
```

You can add more values to the end of the list using the `append` function:

```python
my_list = [3, 1, 4, 1, 5]
print(my_list[-1]) # Prints 5
my_list.append(9) # Prints [3, 1, 4, 1, 5, 9]
print(my_list[-1]) # Prints 9
```

## Functions

Functions are essentially named blocks of code that are infinitely reusable. Functions can optionally take in input parameters, and they can optionally return values that can be used where the function was called. `print()` is an example of a function.

The basic syntax of a function in Python is as follows:

```python
def function_name(optional_parameters):
    # function body
    return optional_return_value
```

**[🤓 WARNING]:** Regardless if they have a return statement, all Python functions have a default return value: `None`. You can see this if you attempt to print the value of a function with no explicit return value.

```python
def internet_person_10_is(description):
    return f"InternetPerson10 is {description}"

print(internet_person_10_is("a GOATed red coder in the Philippines")) # Outputs "InternetPerson10 is a GOATed red coder in the Philippines"
```

This is an example of a function taking in more than one parameter.

```python
def harmonic_sum(a, b):
    return 1 / (1 / a + 1 / b)

print(harmonic_sum(2, 2)) # Prints 1.0000000000
print(harmonic_sum(2, 4)) # Prints 1.3333333333
```

## Input

To take in user input in Python, use the ```input()``` function.

```python
my_input = input() # Stores whatever the user types into the variable 'my_input'
print(my_input) # Prints the user's input\
```

The `input()` function takes in a optional message parameter: `input(message)`.

```python
my_integer = int(input("Please input an integer:")) # This first prints the message "Please input an integer:" then lets the user put in their input, which is then turned into an integer and stored into my_integer.
print(my_integer) # Prints the user's inputted number
```

## If Statements

Conditional statements tell the program to execute certain instructions depending on whether a certain condition is true or false.

```if``` statements allow you to execute certain instructions only if a certain condition is evaluated as true.

```python
a = 5
b = 3
if a > b:
    # This code only executes if a is greater than b
    print("a is greater than b!")
print("Finished executing")
```

```else``` statements are used alongside ```if``` statements. They are only executed if the condition that is being evaluated turns out to be false.

```python
a = 5
b = 3
if a == b:
    # This code only executes if the condition "a is equal to b" is true
    print("a is equal to b!")
else:
    # This code only executes if the condition "a is equal to b" is false
    print("a is not equal to b :(")
```

## For Loops

```for``` loops allow one to repeat certain instructions by going through each indivudal item in a sequence. This sequence can be a range, a list, a string, and many more.

The syntax is as follows:

```python
for variable_name in sequence_of_items
```

A string is essentially a sequence of characters. We can go through each character of a string using a ```for``` loop!

```python
my_string = "string"
for char in my_string:
    # We are essentially saying, "for each character in this string, do whatever instructions i have in this for loop"
    print(char)
    # In this case, my instructions are to print whatever character the loop is on
# Prints s, t, r, i, n, g 
```

The ```range``` function allows us to go through a sequence of numbers. It has 3 parameters: the ```start```, the ```stop```, and the ```step```. The only required parameter is the ```stop``` parameter, which defines where the loop should stop. The ```start``` parameter defines where the loop starts, and the ```step``` defines how much we will move after each iteration of the loop.

```python
for i in range(5):
    print(i)
# Prints 0, 1, 2, 3, and 4
for i in range(1, 6):
    print(i)
# Prints 1, 2, 3, 4, and 5
for i in range(1, 6, 2):
    print(i)
# Prints 1, 3, and 5
for i in range(6, 0, -1):
    print(i)
# Prints 6, 5, 4, 3, 2, and 1
for i in range(6, 0, -2):
    print(i)
# Prints 6, 4, 2
```

Lists are just a sequence of items stored in one variable. We can use a ```for``` loop to go through each item in this sequence.

```python
my_list = ["Alpha", "Bravo", "Charlie", "Delta"]
for word in my_list:
    print(word)
# Prints Alpha, Bravo, Charlie, Delta
```

## While Loops

```while``` loops allow one to repeat instructions as long as a certain condition is evaluated as true. One must make sure that this condition will eventually evaluate to false to avoid an infinite loop.

```python
a = 5
while a > 0:
    # We're saying, "While a is greater than 0, keep repeating these instructions"
    print(a)
    a = a - 1 # Decrease the value of a by 1; this ensures we do not have an infinite loop because at some point, the value of a be 0, which is NOT greater than 0 (thus terminating the loop).
# Prints 5, 4, 3, 2, 1;
```

This is an example of a loop that goes on forever.

```python
a = 5
while a > 0:
    print(a)
```

This will never terminate because the value of ```a``` is never modified and is thus always greater than 0. The condition will, therefore, always evaluate as true, and the loop will never end.
