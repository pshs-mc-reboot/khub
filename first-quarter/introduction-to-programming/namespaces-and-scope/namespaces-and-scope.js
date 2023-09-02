// This file is an example of how to use namespaces and scope in JavaScript.

// This is the global namespace and scope for this file. Anything defined here is accessible to all other namespaces and scopes within the file.
const x = 10
const y = 20

{
    // This is a local namespace and scope. Anything defined here is only accessible to this namespace and scope.
    const x = 15
    console.log(x) // 15
    console.log(y) // 20
}

const my_function = () => {
    // This is the local namespace and scope for the my_function function. Anything defined here is only accessible to this function.
    const x = 20
    console.log(x) // 20

    const my_other_function = () => {
        // This is the local namespace and scope for the my_other_function function. Anything defined here is only accessible to this function.
        const y = 25
        console.log(y) // 25
        console.log(x) // 20
    }
}
