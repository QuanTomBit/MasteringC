# Notes on the C Language
---
## Data Types

### Primary Data Types:
integer - `int`  
floating point - `float`  
character - `char`  
`void`  
enumeration - `enum`  

### Derived Data Types:
`array`  
`structure`  
`union`  
`pointer`  

### Integer Type
`int` (signed int)   
`unsigned int`   
`short int` or `short`   
`unsigned short int` or `unsigned short`   
`long int` or `long`   
`unsigned long int` or `unsigned long`   
`long long`   
`unsigned long long`   

### Floating Point Type
`float`   
`double`   
`long double`   

### Character Type
`char` (signed char)   
`unsigned char`   

---

## Symbolic Contstants 

It is typically bad practice to have constants within random places of your code. Instead, 
give them names as follows:\
#define <NAME> <value_to_replace_with>\
`#define FREEZING 32`\
Note that there is no semicolon after the definition of symbolic constants. The name given 
to them will be replaced with the text following it.

---

## Character Input and Output

Text input and output, regardless of origin or destination, is treated as a stream of characters.\  
> A _text stream_ is a sequence of characters divided into lines with each line consisting of zero 
> or more characters followed by a newline character.
The simpliest functions for character I/O provided by the standard library are `getchar` and `putchar`.   
