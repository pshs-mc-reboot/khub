const readline = require('readline')
const reader = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
})

// This file is an example of how input and output works in JavaScript.

// The console.log() function is used to output text to the console.
console.log("Hello, world!")

// The reader.question() function is used to get input from the user.
// The reader.question() function takes a string as an argument, which is the text that will be displayed to the user.
// The reader.question() function also takes a function as an argument, which is what will handle the input of the user.
reader.question('The prompt could be empty! What is your name? ', (input) => {
    console.log('Hello, ' + input + '!')

    // The reader.close() function is used to close the reader. This is crucial if you want your program to terminate.
    reader.close()
})