# This file is an example of how control structures work in Python.

# The if statement is used to check a condition.
# If the condition is true, the code inside the if statement is executed.
# If the condition is false, the code inside the if statement is skipped.
# The condition must evaluate to be a boolean value (True or False, or through Truthiness or Falsiness).
# The code inside the if statement must be indented.
# The indentation must be consistent (usually 4 spaces).
if True:
    print("This code is executed because the condition is true.")

if False:
    print("This code is not executed because the condition is false.")

# The else statement is used to execute code when the if statement's condition is false.
# The else statement is optional.
if True:
    print("This code is executed because the condition is true.")
else:
    print("This code is not executed because the condition is true.")

if False:
    print("This code is not executed because the condition is false.")
else:
    print("This code is executed because the condition is false.")

# The elif statement is used to check another condition if the if statement's condition is false.
# The elif statement is optional.
if True:
    print("This code is executed because the condition is true.")
elif False:
    print("This code is not executed because the condition is true.")
else:
    print("This code is not executed because the condition is true.")

if False:
    print("This code is not executed because the condition is false.")
elif True:
    print("This code is executed because the condition is false.")
else:
    print("This code is not executed because the condition is false AND the elif block is executed first.")

# The elif statement can be used multiple times.
n = int(input())

if n < 0:
    print("The number is negative.")
elif n == 0:
    print("The number is zero.")
elif n == 1:
    print("The number is one.")
else:
    print("The number is greater than one.")

# The elif statement can be used without an else statement.
if n < 0:
    print("The number is negative.")
elif n == 0:
    print("The number is zero.")

# The for-in statement is used to iterate over a sequence (list, tuple, string, set, dictionary, etc.).
for i in [1, 2, 3]:
    print(i)

for i in (1, 2, 3):
    print(i)

for i in "123":
    print(i)

for i in {1, 2, 3}:
    print(i)

for i in {"one": 1, "two": 2, "three": 3}:
    print(i)  # Prints the keys.

# The for-in statement could be used in tandem with functions that return an iterable
# (such as range, which returns a range object).
for i in range(1, 4):
    print(i)

# The for-in statement can be used with the else statement.
# The else statement is executed when the for-in statement is completely exhausted (i.e., no break is used to end the for-in loop).
# The else statement is optional
for i in range(1, 4):
    print(i)
else:
    print("The for-in loop is exhausted.")

# The break statement ends the for-in loop.
for n in range(2, 10):
    for x in range(2, n):
        if not n % x:
            print(n, 'equals', x, '*', n // x)
            break
    else:
        print(n, 'is a prime number')

# The continue statement skips the rest of the code in the for-in loop and continues to the next iteration.
for i in range(1, 4):
    if i == 2:
        continue
    print(i)

# The while statement is used to execute code while a condition is true.
flag = True

while flag:
    print("This code is executed because the condition is true.")
    
    number = int(input())

    if number == 0:
        flag = False

# The while statement can be used with the else statement.
# The else statement is executed when the while statement's condition is false.
# The else statement is optional.
flag = True

while flag:
    print("This code is executed because the condition is true.")
    
    number = int(input())

    if number == 0:
        flag = False
else:
    print("This code is executed because the condition is false AND did not use a break statement.")

# The break statement ends the while loop.
flag = True

while flag:
    print("This code is executed because the condition is true.")
    
    number = int(input())

    if number == 0:
        break

# The continue statement skips the rest of the code in the while loop and continues to the next iteration.
flag = True

while flag:
    print("This code is executed because the condition is true.")
    
    number = int(input())

    if number == 0:
        continue

    print("The number is not zero")

    if number == 1:
        break

# The pass statement is used as a placeholder for code that will be added later.
# The pass statement does nothing.
for i in range(10):
    pass
