# This file is an example of how to use variables in Python.

# One does not need to declare a variable before using it. Python will automatically create the variable when it is first assigned a value.
# Variables can be assigned to any value, including other variables.
# Variables can be reassigned to different values, even if they were assigned to a different type of value before.
x = 10

# One may specify a type for a variable, but this is not required nor used by the interpreter.
# This is called type hinting. It is used by IDEs to provide better code completion and by linters to check for type errors.
y: int = 5

print(x) # 10
print(y) # 5
