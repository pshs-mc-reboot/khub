# This file is an example of how truthiness and falsiness work in Python.

# Boolean values are the two constant objects False and True.
# Although the examples here cast to bool explicitly, it is rarely necessary to do so explicitly.
# Numbers are false if zero, and true if non-zero.
print(bool(0))  # False
print(bool(1))  # True

# None is always false.
print(bool(None))  # False

# Containers are false if empty, and true if non-empty.
print(bool([]))         # False
print(bool([1, 2, 3]))  # True

print(bool({}))         # False
print(bool({1, 2, 3}))  # True
