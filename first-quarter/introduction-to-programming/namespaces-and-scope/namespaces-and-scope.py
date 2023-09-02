# This file is an example of how namespaces and scope work in Python.

# This is the global namespace and scope. Everything defined here is available to the entire program.
x = 10

def my_func():
    # This is a local scope. Everything declared inside this function can only be accessed by other things in the function.
    # In Python3.10, you can use the nonlocal keyword to access variables in the parent scope.
    x = 5
    print(x) # 5

my_func()

print(x) # 10
