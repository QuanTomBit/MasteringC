# Notes on the C Language
---
## Data Types

### Primary Data Types:
integer - `int`\
floating point - `float`\
character - `char`\
`void`\
enumeration - `enum`

### Derived Data Types:
`array`\
`structure`\
`union`\
`pointer`

### Integer Type
`int` (signed int) - 16 bits\
`unsigned int`\
`short int` or `short`\
`unsigned short int` or `unsigned short`\
`long int` or `long` - 32 bits\
`unsigned long int` or `unsigned long`\
`long long`\
`unsigned long long`

### Floating Point Type
`float`\
`double`\
`long double`\

### Character Type
`char` (signed char)\
`unsigned char`

> Note that there are 8 bits in a byte.

## Symbolic Consttants 

It is typically bad practice to have constants within random places of your code. Instead, 
give them names as follows:\
#define <NAME> <value_to_replace_with>\
`#define FREEZING 32`\
Note that there is no semicolon after the definition of symbolic constants. The name given 
to them will be replaced with the text following it.

## Character Input and Output

Text input and output, regardless of origin or destination, is treated as a stream of characters.\  

> A _text stream_ is a sequence of characters divided into lines with each line consisting of zero 
> or more characters followed by a newline character. (Ritchie & Kernigham, 1988)

The simpliest functions for character I/O provided by the standard library are `getchar()` and `putchar()`.\
Each time it is called, `getchar()` read the next input character from a text stream and returns it. The function 
`putchar()` will print the character passed to it. When assigning `getchar()` to a variable, the variable must be 
of size int or of a data type that is greater than or equal to the same number of bytes as int. This is because 
`getchar()` can return `EOF` which is an symbolic constant integer defined in stdio.h that means "End of File".

## Functions

> Note: The rules for declaring and using functions mentioned here are in realation to ANSI C.

Functions offer encapsulation to C programs. A function definition has the following form:\
`[return_type] [function_name]([parameter_declarations]) {`\
&nbsp;&nbsp;&nbsp;`declarations`\
&nbsp;&nbsp;&nbsp;`statements`\
`}`

**Function prototypes** are definitions of the functions used within a file. They are placed at the beginnning, typically 
between the lines declaring the included libraries and the main function or first functions defined. They are helpful for 
allowing the compiler to check for errors.\
A **parameter** is a variable in the function definition, and an **argument** is a variable passed during a function call. 
All function arguements are _pass-by-value_ meaning that functions are given the values of the arguements in temporary varaibles. 
This makes it so a called function cannot directly alter the variable. However, _pointers_ allow the actual variable to be altered 
by passing the value of its address. This is how arrays must be passed in C.

## Miscellaneous

An isolated semicolon is called the _null statement_.

---

## References

Ritchie, M. D, & Kernigham, W. B. (1988). The C Programming Language (2nd Ed.). Englewood Cliffs, New Jersey: Prentice Hall.
