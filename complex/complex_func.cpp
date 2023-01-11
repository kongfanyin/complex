#define _CRT_SECURE_NO_WARNINGS 1
#include"complex.h"



Complex::Complex()
{
	r = i = 0;
}

Complex::Complex(double n1, double n2)
{
	r = n1;
	i = n2;
}

Complex::~Complex()
{

}

Complex Complex::operator+(const Complex & c) const
{
	Complex total;
	total.r = r + c.r;
	total.i = i + c.i;
	return total;
}

Complex Complex::operator-(const Complex & c) const
{
	Complex diff;
	diff.r = r- c.r;
	diff.i = i - c.i;
	return diff;
}

Complex Complex::operator*(double n) const
{
	Complex mult;
	mult.r = r * n;
	mult.i = i * n;
	return mult;
}

Complex Complex::operator*(const Complex & c) const
{
	Complex multi;
	multi.r = r * c.r - i * c.i;
	multi.i = r * c.i + i * c.r;
	return multi;
}

Complex Complex::operator~() const
{
	Complex conj;
	conj.r = r;
	conj.i= -i;
	return conj;
}
Complex operator*(double n, const Complex & c)
{
	return c * n;
}

std::istream & operator>>(std::istream & is, Complex & c)
{
	std::cout << "real:";
	if (is >> c.r)
	{
		std::cout << "imaginary: ";
		is >> c.i;
		return is;
	}
	return is;
}

std::ostream & operator<<(std::ostream & os, const Complex & c)
{
	// TODO: 在此处插入 return 语句
	os << "(" << c.r << ", " << c.i<< "i)";
	return os;
}
