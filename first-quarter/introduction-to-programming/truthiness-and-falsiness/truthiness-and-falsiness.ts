// This file is an example of how truthiness and falsiness work in TypeScript.

// For numbers, 0 is falsy and all other numbers are truthy.
console.log(0 ? 'truthy' : 'falsy') // falsy
console.log(1 ? 'truthy' : 'falsy') // truthy

// For strings, empty strings are falsy and all other strings are truthy.
console.log('' ? 'truthy' : 'falsy')      // falsy
console.log('hello' ? 'truthy' : 'falsy') // truthy

// For arrays, empty arrays are falsy and all other arrays are truthy.
console.log([] ? 'truthy' : 'falsy')  // falsy
console.log([1] ? 'truthy' : 'falsy') // truthy

// For objects, all objects are truthy.
console.log({} ? 'truthy' : 'falsy') // truthy

// For keywords, undefined, null, and NaN are falsy.
console.log(undefined ? 'truthy' : 'falsy') // falsy
console.log(null ? 'truthy' : 'falsy')      // falsy
console.log(NaN ? 'truthy' : 'falsy')       // falsy
