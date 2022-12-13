# Notes

## Skeleton of C++ Program
```C++
/// <reference path="iostream is a library
/// iostream.h == iostream
#include <iostream>

using namespace std;
// you can remove "std" in items below if using namespace

/// Int is the type of value being returned
/// Main is required as it is the part of the program that kicks off
int main()
{
    // Console out
    /// << insert operator
    /// std scope resolution
    std::cout<<"Hello World";
    return 0;
}
```

## How to write a program

Components to a program:

- Input
- Process
- Output

## Why Data Types

Data
|_______________
|               |
Numeric        Character/Alphabetic


Numeric:
- Decimal
- Floating

Character/Alphabetic:
- String

## Primitive Data Types

Data Types:
- Primitive
    - Inegral
        - Int
        - Char
    - bool
    - floating point
        - float
        - double

User Defined:
- enum
- structure
- union
- class

Derived:
- Array
- Pointer
- Reference

### 16 Bit Object

| MSB | | | | | | | | | | | | | | | LSB |
| Sign | | | Byte 2 | | | | | | | | | Byte 1 | | | LSB |

Sign:
- 0 `+`
- 1 `-`

