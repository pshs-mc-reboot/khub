// This file is an example of how keywords and operators work in JavaScript.

// The const keyword is used to declare a constant variable. A constant variable is a variable that cannot be reassigned.
// The = operator is used to assign a value to a variable.
const x = 10
const y = 20

// The {} operator is used to create a local namespace and scope.
{
    const x = 15
    console.log(x) // 15
    console.log(y) // 20
}

// The () operator is used to create a function.
// The => operator is used to create an arrow function.
const my_function = () => {
    const x = 20
    console.log(x) // 20

    const my_other_function = () => {
        const y = 25
        console.log(y) // 25
        console.log(x) // 20
    }

    my_other_function()
}

my_function()
