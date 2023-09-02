// This file is an example of how to use keywords and operators in TypeScript.

// This line is required to use the global scope.
// The export keyword is used to make the file a module.
export {}

// The declare keyword is used to tell TypeScript that the following code already exists.
// In this case, we're telling TypeScript that the global scope has a String interface.
declare global {
    interface String {
        /**
         * Returns the last character of a string.
         * @example
         * const str = 'Hello, world!'
         * console.log(str.length) // expected output: 13
         */
        ending: string
    }
}

// We'll assume that the String interface has been implemented in the global scope.
// In TypeScript specifically, this needs to be done by the programmer.
const my_string: String = 'Hello, world!'
console.log(my_string.ending) // expected to be '!' but is undefined as of now
