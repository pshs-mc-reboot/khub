# Python
For simple problems that don't involve complicated data structures and don't require the program to be very fast, Python is a good choice. Python's syntax is concise and easily readable. In Python, you don't even need to use semicolons!

## Output

First, let us talk about how to output things in Python. Usually, to output things, we can use the `print` function:

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
print(my_message) # Prints MISS KO NA SI- gunshots
```

Notice that you don't need to specify the data type. You don't even need to write `var` or `let` unlike in other programming languages. You just need to *write* the name of the variable, and that declares a new variable!

The syntax to reassign a new value into an existing variable is the same as the syntax for declaring a variable.

```python
my_message = "Hello ComProg world!"
print(my_message) # Prints Hello CompProg world!
my_message = "Raphael Dylan Dalida is the GOAT"
print(my_message) # Prints Raphael Dylan Dalida is the GOAT
```

You can also store other things into variables, such as numbers:

```python
my_num = 10
print(my_num) # Prints 10
```

Finally, you can change the data type stored in the variable at run time, although I do not recommend doing this.

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

### f-strings

f-strings make it easier to interpolate values into strings.

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

**[🤓 WARNING]** For more info, see the following [cheatsheet](https://fstring.help/cheat/).

## Lists
Python lists[^1] are useful for when you need to access an arbitrary value from the list quickly. You can also append values at the end of a list quickly. However, inserting values in the middle of the list is slow.

[^1]: Technically, Python lists are closer to dynamic arrays than linked lists. If you know C++, Python lists are closer to `std::vector` than `std::list`.

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
Functions are essentially named blocks of code. Functions take in input and spit out an output.

```python
def internet_person_10_is(description):
    return f"InternetPerson10 is {description}"

print(internet_person_10_is("a GOATed red coder in the Philippines")) # Outputs "InternetPerson10"

def harmonic_sum(a, b):
    return 1 / (1 / a + 1 / b)

print(harmonic_sum(2, 2)) # Prints 1.0000000000
print(harmonic_sum(2, 4)) # Prints 1.3333333333
```

## Input

To take in input in python 

## If Statements

## For Loops

## While Loops
