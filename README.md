# Complex Numbers

A C++ implementation of a class representing complex numbers.

## Description

This project implements a custom `Complex` class that represents a complex number using a real part and an imaginary part.

A complex number can be represented in the form:

3 + 5i

The class supports basic arithmetic operations between complex numbers and custom output formatting.

## Features

- Parameterized constructor
- Copy constructor
- Addition of complex numbers
- Subtraction of complex numbers
- Multiplication of complex numbers
- Division of complex numbers
- Custom `<<` operator for displaying complex numbers

## Technologies

- C++
- Standard Library
- Object-Oriented Programming

## Concepts Used

- Classes and objects
- Constructors
- Copy constructor
- Encapsulation
- Operator overloading
- Friend functions
- `ostream`
- Mathematical operations with complex numbers

## Example

```cpp
Complex a(12, 48);
Complex b(a);

Complex c = a + b;
Complex d = a - b;
Complex e = a * b;
Complex f = a / b;

cout << "c = " << c << endl;
cout << "d = " << d << endl;
cout << "e = " << e << endl;
cout << "f = " << f << endl;
