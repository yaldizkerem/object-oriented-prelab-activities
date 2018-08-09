#pragma once
#include <iostream>
class Vector
{
	double* m_data;
	int m_dimension;
public:
	Vector(int dimension = 3);
	Vector(double data[], int dimension);
	Vector(const Vector & copyVector);
	~Vector();
	int getDimension();
	const Vector & operator=(const Vector & copyVector);
	bool operator==(const Vector & secondOperand);
	bool operator!=(const Vector & secondOperand);
	bool operator<(const Vector & secondOperand);
	bool operator<=(const Vector & secondOperand);
	bool operator>(const Vector & secondOperand);
	bool operator>=(const Vector & secondOperand);
  double & operator[](int index);
	double & operator[](int index) const;
	Vector operator+(const Vector & secondOperand);
	Vector& operator+=(const Vector & secondOperand);
	Vector operator-(const Vector & secondOperand);
	Vector& operator-=(const Vector & secondOperand);
	double operator*(const Vector & secondOperand);
	Vector operator*(const double multiplier);
	Vector& operator*=(const double multiplier);
	Vector operator/(const Vector & secondOperand);
	Vector& operator/=(const Vector & secondOperand);
	Vector operator/(const double divider);
	Vector& operator/=(const double divider);
	double operator()();
	Vector& operator!();
};

std::ostream& operator<<(std::ostream& os, Vector& v);
std::istream& operator>>(std::istream& is, Vector& v);
