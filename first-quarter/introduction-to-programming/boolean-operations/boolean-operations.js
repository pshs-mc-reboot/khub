// This file explains how boolean operations work in JavaScript

// The AND operation (in JS: '&&') returns a 'true' if both operands are 'true'
console.log(true && true) // true
console.log(true && false) // false
console.log(false && false) // false


// The OR operation (in JS: '||') returns a 'true' if one or both operands are 'true'
console.log(true || true) // true
console.log(true || false) // true
console.log(false || false) // false


// The NOT operation (in JS: '!') returns the opposite boolean value of the operand
console.log(!true) // false
console.log(!false) // true


// Boolean operations can be combined to make complex operations
console.log((true && !false) || false) // true