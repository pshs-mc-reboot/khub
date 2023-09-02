# This file is an example of how boolean operations work in Python

# The AND operation (represented in Python via 'and') returns 'True' when both sides of the operation are 'True'
print(True and True) # True
print(True and False) # False
print(False and False) # False

# The OR operation (represented in Python via 'or') returns 'True' when one or both sides of the operation is 'True'
print(True or True) # True
print(True or False) # True
print(False or False); # False

# The NOT operation (represented in Python via 'not') returns the opposite value of the operand.
print(not True) # False
print(not False) # True

# Boolean operations can be combined to make more complex operations
print((True and not False) or False) # True