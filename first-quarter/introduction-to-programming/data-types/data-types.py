# This file contains an introduction to data types in Python


# Data types are implicitly defined by Python when variables are declared. However, variable data types can be explicitly hinted by adding the data type after a colon.
a:int = 10
b:float = 30.023

# The following are text-related data types
c:chr = 'a'
d:str = 'Hello World!'

# The following is a boolean data type
x:bool = True
y:bool = False

# The following is a list, which is a collection of values referenced by one variable. Note that multiple data types can exist inside a single list.
e:list = ["I love Python!", 2.2, True, 17]



# FOOTNOTE: Hinting data types is not required.

# FOOTNOTE: Variables with explicitly hinted data types are NOT strictly typed, which means the variable's actual data type can be different to its hinted data type. For example, "a:list = True" is a valid line of code, even though 'a' is not a list.