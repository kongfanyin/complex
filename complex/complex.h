#pragma once
#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <cmath>
#include <iostream>
class Complex
{
public:
	Complex();
	Complex(double n1, double n2);
	~Complex();
	//opretor overloading
	Complex operator+(const Complex &c)const;
	Complex operator-(const Complex &c)const;
	Complex operator*(double n)const;
	Complex operator*(const Complex &c)const;
	Complex operator~()const;
	//friend 
	friend Complex operator*(double n,const Complex &c);
	friend std::istream & operator>>(std::istream & is, Complex & c);
	friend std::ostream & operator<<(std::ostream & os, const Complex & c);
private:
	double r;
	double i;
};


#endif // !COMPLEX_H_
