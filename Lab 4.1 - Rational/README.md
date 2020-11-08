# Lab 4.1 - Rational in C++

## Overview

A `Rational` class in C++. There will be a test program (`rational_test.cpp`) as well as an exception class (`rational_exception.h`) provided. In addition, a partial `rational.h` file is provided to illustrate the proper parameter passing conventions used.

Besides that, the basic specs are the same, just a transliteration from Java to C++. The [Notes](#Notes) section will contain language-specific differences.

The only additional function that needs to be written is `void print(ostream &os) const;`, a member function that prints out the `Rational`. This replaces the `toString` method of the Java implementation, and should have the same semantics.

## Program Organization

The CodeLab implementation follows the following program organization, and will complain if the student implementation deviates:
- `rational_test.cpp`
- `rational.h` - There are two versions: one with sample headers, and another with .skeleton suffix with just the `<<` operator.
- `rational.cpp`
- `rational_exception.h`
- `gcd.h` - `gcd` function is here. Since it's a header file and potentially included by many sources in the program, it is declared inline to prevent 'multiple definitions' link errors.

## Notes

- Much of this can be accomplished as a transliteration from Java to C++, the main differences are sketched out below
- **function signatures** — one of the most significant of the changes as well as one of the main topics targeted by this exercise.
    - Parameter types:
        - If the argument is to be modified, use call-by reference (`&`); this is true of both fundamental as well as class types
        - If the type is a class, use const-class-by-reference (`const ... &`)
        - If the type is a fundamental, use call-by-value
    - Return type:
        - If the type is a fundamental, use return-by-value
        - If the type is a class, and the value returned is a local variable (or an expression), use return-by-value
        - Otherwise, if the type is a class, return-by-reference
- The three *application oriented* constructors can be collapsed into one using defaults arguments
    - What is meant by application-oriented is the constructors that initialize the object using values meaningful to the semantics of the class. For example, using a pair of integers to initialize a Rational, or a name, address, and id to initialize a student. Such constructors deal with values coming from the application (numerators, name, etc).
    - This is in contrast to a copy constructor which uses another object of the same class. The semantics of copy constructors is essentially the same for all classes — copy (in a semantically appropriate manner) the fields of the source object to the corresponding fields of the destination. There is little if any logic related to the application.
- As before, the functionality of arithmetic operators can be leveraged and reused for their corresponding *inPlace* functions.
- `this` is a pointer, so to get the fields of the object, `->` is needed and to refere to the object, `*this` is needed
- The `<<` operator for `Rational` makes it easier to print the rational
    - This allows `cout <<` to be written, where `r` is of type `Rational`
- Do not put `using namespace std;` in header files. Anything from the Standard Library must be fully qualified, prefixed with `std::`.