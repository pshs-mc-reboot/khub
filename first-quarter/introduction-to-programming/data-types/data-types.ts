// This file is an example of how to use data-types in TypeScript.

// TypeScript is a statically typed language, which means that the type of a variable is known at compile time.

// The first data-type is boolean, which can be either true or false.
const my_boolean: boolean = true

// The second data-type is number, which can be either an integer or a floating point number.
const my_number: number = 1
const my_number_two: number = 1.1

// The third data-type is string, which can be either a single character or a string of characters.
// Like JavaScript, TypeScript also uses double quotes (") or single quotes (') to surround string data.
// TypeScript also supports template strings, which can span multiple lines and have embedded expressions.
const my_string: string = 'Hello World!'
const my_string_two: string = "Hello World!"
const my_string_three: string = `Hello World!`

// The fourth data-type is array, which can be either a single dimensional array or a multi-dimensional array.
// Like JavaScript, TypeScript also uses square brackets ([]) to surround array data.
const my_array: number[] = [1, 2, 3]
const my_array_two: number[][] = [[1, 2, 3], [4, 5, 6]]

// The fifth data-type is tuple, which can be either a single dimensional tuple or a multi-dimensional tuple.
// Like JavaScript, TypeScript also uses square brackets ([]) to surround tuple data.
const my_tuple: [number, string] = [1, 'Hello World!']

// The sixth data-type is enum, which can be either a single dimensional enum or a multi-dimensional enum.
enum my_enum {
    one = 1,
    two = 2,
    three = 3
}

// The seventh data-type is any, which can be either a single dimensional any or a multi-dimensional any.
// The any data-type is used to represent any type of data.
const my_any: any = 1
const my_any_two: any = 'Hello World!'
const my_any_three: any = [1, 2, 3]

// The eighth data-type is void, which can be either a single dimensional void or a multi-dimensional void.
// The void data-type is used to represent the absence of a value.
const my_void: void = undefined

// The ninth data-type is null, which can be either a single dimensional null or a multi-dimensional null.
// The null data-type is used to represent an intentional absence of a value.
const my_null: null = null

// The tenth data-type is undefined, which can be either a single dimensional undefined or a multi-dimensional undefined.
// The undefined data-type is used to represent an unintentional absence of a value.
const my_undefined: undefined = undefined

// The eleventh data-type is never, which can be either a single dimensional never or a multi-dimensional never.
// The never data-type is used to represent a value that will never occur.
const my_never: never = (() => { throw new Error('Hello World!') })()

// The twelfth data-type is object, which can be either a single dimensional object or a multi-dimensional object.
// The object data-type is used to represent a non-primitive type.
const my_object: object = { one: 1, two: 2, three: 3 }

// The thirteenth data-type is unknown, which can be either a single dimensional unknown or a multi-dimensional unknown.
// The unknown data-type is used to represent an unknown type.
const my_unknown: unknown = 1

// In TypeScript, you may create your own types using the type keyword.
type my_type = number
type my_type_two = {
    one: number,
    two: number,
    three: string
}
type my_type_three = my_type | my_type_two
type my_type_four = my_type & my_type_two
type my_type_five = 'one' | 'two' | 'three'

// Try and experiment with the data-types above.
const my_data: my_type = 1                      // Passes the type-check.
// const my_data_two: my_type = 'Hello World!'  // Fails the type-check.
