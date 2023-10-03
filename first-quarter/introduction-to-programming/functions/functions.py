# This file is an example of how functions work in Python.

# The def statement is used to define a function.
# The def statement must be followed by the function name and parentheses.
# The parentheses must be followed by a colon.
def function_name():
    print("Hello, world!")

# Inside the parentheses are the function's parameters.
# The function's parameters are optional.
# The function's parameters are separated by commas.
def function_name_with_parameters(parameter1, parameter2):
    print(parameter1, parameter2)

# The return statement is used to return a value from a function.
def function_name_with_return():
    return "Hello, world!"

print(function_name_with_return())

# The return statement can be used to return multiple values from a function.
def function_name_with_multiple_returns():
    return "Hello,", "world!"  # same as return ("Hello,", "world!")

# Note that a function with multiple returns gives a tuple.
print(function_name_with_multiple_returns())

# The lambda statement is used to create anonymous functions.
# The lambda statement must be followed by the function's parameters.
# The function's parameters are optional.
x = lambda: print("Hello, world!")
x()

# The lambda statement can be used to create anonymous functions with parameters.
x = lambda parameter1, parameter2: print(parameter1, parameter2)
x("Hello,", "world!")
