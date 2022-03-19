
# A printf implementation for Embedded Systems

This is an implementation for a printf function without knowing the number
of the input parameters .


I implemented this project with the help of the standard printf 
[in the standard library]


# A printf implementation for Embedded Systems

This is an implementation for a printf function without knowing the number
of the input parameters .


I implemented this project with the help of the standard printf 
[in the standard library]



## Usage/Examples

Add/link log.c to your project and include log.h. That's it. 
Usage is almost like the according stdio.h library version:

```javascript
/*
The init function takes 2 parameters
1st parameter : determines whether the standard output is the CONSOLE or a FILE 
2nd parameter : in case that the standard output is a FILE the filename is the name of that file
*/

void log_init(const char * channel , const char * filename);
void log_print(const char * formatString , ...);
```






## Format Specifiers

| Type               | Output                                                               |
| -----------------  | ------------------------------------------------------------------ |
| d or i      | Signed decimal integer |
| u      | Unsigned decimal integer |
| o     | Unsigned octal |
| x     | Unsigned hexadecimal integer (lowercase) |
| X     | Unsigned hexadecimal integer (uppercase) |
| f     | Decimal floating point |
| c     | Single character |
| s     | String of characters |
| p     | Pointer address |
| %     | A % followed by another % character will write a single % |

## Supported Flags
## Supported Width
## Supported Precision

## Supported Length

| Length               | d i            | u |
| -----------------  | --------------- | --|
| (none)     | int |  unsigned int |
| h      | short int    | unsigned short int |
| l      | long int    | unsigned long int |
| ll      | long long int    | unsigned long long int |