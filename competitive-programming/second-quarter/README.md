# Introduction to Competitive Programming

Competitive programming is a sport where participants solve algorithmic problems using a programming language of their choice. The goal is to solve as many problems as possible within the time limit. For these modules, we'll use Python3.10 and C++20.

## Python3.10 and C++20

As mentioned earlier, we'll be using Python3.10 and C++20 for these modules. Here are some comparisons between the two languages:

<center>

| Python3.10                                        | C++20                                      |
| ------------------------------------------------- | ------------------------------------------ |
| Python is interpreted.                            | C++ is compiled.                           |
| Python is dynamically typed.                      | C++ is statically typed.                   |
| Python is slow.                                   | C++ is fast.                               |
| Python is concise.                                | C++ is verbose.                            |
| Python is memory-safe.                            | C++ is not memory-safe.                    |
| Python is not suitable for low-level programming. | C++ is suitable for low-level programming. |
| Python is suitable for rapid prototyping.         | C++ is not suitable for rapid prototyping. |

</center>

We'll delve deeper into how to use each language for solving competitive programming problems in the next modules. This includes the following:

- Syntax
- Data structures
- Algorithms
- Standard libraries
- Debugging
- Testing

## Algorithmic Strategies

An **algorithm** is a step-by-step procedure to solve a problem or achieve a goal. In competitive programming, we often encounter problems that require us to design and implement efficient algorithms. There are many different types of algorithms, such as:

- **Brute force**: Try all possible solutions and choose the best one.
- **Backtracking**: Explore the solution space by making choices and undoing them if they lead to a dead end.
- **Dynamic programming**: Store and reuse the results of overlapping subproblems to avoid recomputation.
- **Divide and conquer**: Break the problem into smaller subproblems, solve them recursively, and combine the results.
- **Greedy**: Choose the best option at each step, without looking ahead.
- **Search**: Find an element or a path in a data structure, such as an array, a tree, or a graph.
- **Sorting**: Arrange the elements of a sequence in a certain order, such as ascending or descending.
- **Mathematical**: Use mathematical concepts and techniques, such as number theory, combinatorics, geometry, or probability.

We'll learn how to apply these algorithmic strategies to various competitive programming problems within this module. For each, this includes the following:

- Problem analysis
- Time and space complexity
- Implementation tips and tricks
- Common pitfalls and errors
- Optimization techniques

### Big-O notation

The **time complexity** of an algorithm is the number of operations it performs as a function of the input size.

For example, consider the following Python function:

```python
def sum(n):
    total = 0
    for i in range(n):
        total += i
    return total
```

The function `sum` takes a single integer `n` as input and returns the sum of all integers from `0` to `n - 1`. The time complexity of `sum` is $O(n)$, since it performs `n` additions.

Complexity is often expressed as a function of `n`, the input size. However, it can also be expressed as a function of other variables, such as the number of nodes in a graph or the number of elements in an array.

To calculate the time complexity of a function, we can count the number of operations it performs. For example, the function `sum` performs `1` addition to initialize `total`, `n` additions to update `total`, and `1` addition to return `total`. Therefore, the total number of additions is `1 + n + 1 = n + 2`. Since we only care about the **dominant** term, the time complexity of `sum` is `O(n)`.

There are many different notations for complexity in general. The most common one is **Big-O notation**, which is used to describe the *asymptotic* behavior of a function. For example, `O(n)` means that the function grows linearly with `n`, while `O(n^2)` means that the function grows quadratically with `n`. Different Big-O notations are ordered as follows:

1. $O(1)$: constant
2. $O(\lg n)$: logarithmic
3. $O(n)$: linear
4. $O(n \lg n)$: linearithmic
5. $O(n^2)$: quadratic
6. $O(n^3)$: cubic
7. $O(2^n)$: exponential
8. $O(n!)$: factorial
9. $O(n^n)$: superfactorial

#### Intuition and properties

Big-O notation is used to describe the asymptotic behavior of a function. This means that we only care about the dominant term of the function, since the other terms become insignificant as the input size grows.

To further visualize this, consider the following graph:

<center>

![Big-O graph](/assets/big-o-graph.png)

</center>

Although the graph shows functions of the family $O(n^2)$, once you "zoom out" enough, the functions become indistinguishable from each other. This is because the dominant term of each function is $n^2$, which grows quadratically with $n$.

#### A more formal definition

...

### Time complexity

...

### Space complexity

...

### Simple loop design strategies

...

### Exhaustive search algorithms

...

### Greedy algorithms

...

### Backtracking

...

### Branch and bound

...

### Dynamic programming

...

### Stacks and queues

...

### Binary heap data structures

...
