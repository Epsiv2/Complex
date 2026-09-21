#include <iostream>

using namespace std;


class Complex
{
private:
	double m_real;
	double m_imaginary;

public:

	// Constructor
	Complex(double real, double imaginary)
		: m_real(real), m_imaginary(imaginary)
	{
	}

	// Copy constructor
	Complex(const Complex& other)
		: m_real(other.m_real), m_imaginary(other.m_imaginary)
	{
	}

	// Operator overloading for addition
	Complex operator+(const Complex& other)
	{
		return Complex(m_real + other.m_real, m_imaginary + other.m_imaginary);
	}

	// Operator overloading for subtraction
	Complex operator-(const Complex& other)
	{
		return Complex(m_real - other.m_real, m_imaginary - other.m_imaginary);
	}

	// Operator overloading for multiplication
	Complex operator*(const Complex& other)
	{
		return Complex(m_real * other.m_real - m_imaginary * other.m_imaginary,
			m_real * other.m_imaginary + m_imaginary * other.m_real);
	}
	// Operator overloading for division
	Complex operator/(const Complex& other)
	{
		double denominator = other.m_real * other.m_real + other.m_imaginary * other.m_imaginary;
		return Complex((m_real * other.m_real + m_imaginary * other.m_imaginary) / denominator,
			(m_imaginary * other.m_real - m_real * other.m_imaginary) / denominator);
	}
	// Friend function to overload the << operator for output
	friend ostream& operator<<(ostream& os, const Complex& complex);
	
	
};

// Overloading the << operator for output
ostream& operator<<(ostream& os, const Complex& complex)
{
	os << complex.m_real << " + " << complex.m_imaginary << "i";
	return os;
}



// Main function
int main()
{
	Complex a(12, 48);
	Complex b(a);

	Complex c = a + b;
	Complex d = a - b;
	Complex e = a * b;
	Complex f = a / b;

	// Display the results

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	cout << "e = " << e << endl;
	cout << "f = " << f << endl;

	return 0;
}