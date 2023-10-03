// This file is an example of control structures in JavaScript.

// if statement
if (true) {
    console.log("This statement is true.")
}

// if-else statement
if (false) {
    console.log("This statement is true.")
} else {
    console.log("This statement is false.")
}

// if-else if-else statement
if (false) {
    console.log("This statement is true.")
} else if (true) {
    console.log("This statement is true.")
} else {
    console.log("This statement is false.")
}

// switch statement
var x = 1

switch (x) {
    case 1:
        console.log("x is 1.")
        break
    case 2:
        console.log("x is 2.")
        break
    default:
        console.log("x is not 1 or 2.")
        break
}

// while loop
var x = 0

while (x < 10) {
    console.log(x)
    x++
}

// do-while loop
var x = 0

do {
    console.log(x)
    x++
} while (x < 10)

// for loop
for (var x = 0; x < 10; x++) {
    console.log(x)
}

// for-in loop
var obj = {
    x: 1,
    y: 2,
    z: 3
}

for (var key in obj) {
    console.log(key)
}

// for-of loop
var arr = [1, 2, 3]

for (var value of arr) {
    console.log(value)
}

// break statement
var x = 0

while (true) {
    if (x === 10) {
        break
    }

    console.log(x)
    x++
}

// continue statement
var x = 0

while (x < 10) {
    x++

    if (x % 2 === 0) {
        continue
    }

    console.log(x)
}
