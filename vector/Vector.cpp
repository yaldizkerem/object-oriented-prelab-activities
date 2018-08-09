#include "Vector.h"
#include <iostream>
#include <iomanip>
#include <math.h>
Vector::Vector(int dimension)
{
  m_dimension=dimension;
  m_data=new double[dimension];
}
Vector::Vector(double data[], int dimension)
{
  m_data=new double[dimension];
  for(int i=0;i<dimension;i++)
  {
    m_data[i]=data[i];
  }
  m_dimension=dimension;
}
Vector::Vector(const Vector & copyVector)
{
  m_dimension=copyVector.m_dimension;
  m_data=new double[m_dimension];
  for(int i=0;i<m_dimension;i++)
  {
    m_data[i]=copyVector.m_data[i];
  }

}
Vector::~Vector()
{
  delete[] m_data;
}
int Vector::getDimension()
{
  return m_dimension;
}
const Vector & Vector::operator=(const Vector & copyVector)
{
  m_dimension=copyVector.m_dimension;
  m_data=new double[m_dimension];
  for(int i=0;i<m_dimension;i++)
  {
    m_data[i]=copyVector.m_data[i];
  }
  return *this;
}
bool Vector::operator==(const Vector & secondOperand)
{
  for(int i=0;i<m_dimension;i++)
  {
    if(m_data[i]==secondOperand.m_data[i])
      continue;
    else
      return false;
  }
  return true;
}
bool Vector::operator!=(const Vector & secondOperand)
{
  return (!(*this==secondOperand));
}
bool Vector::operator<(const Vector & secondOperand)
{
  double mag1=0,mag2=0;
	for(int i=0;i<m_dimension;i++)
  {
		mag1+=m_data[i]*m_data[i];
		mag2+=secondOperand[i]*secondOperand[i];
	}
	if (mag1<mag2)
		return true;
	return false;
}
bool Vector::operator<=(const Vector & secondOperand)
{
  double mag1=0,mag2=0;
	for(int i=0;i<m_dimension;i++)
  {
		mag1+=m_data[i]*m_data[i];
		mag2+=secondOperand[i]*secondOperand[i];
	}
	if (mag1<=mag2)
		return true;
	return false;
}
bool Vector::operator>(const Vector & secondOperand)
{
  double mag1=0,mag2=0;
	for(int i=0;i<m_dimension;i++)
  {
		mag1+=m_data[i]*m_data[i];
		mag2+=secondOperand[i]*secondOperand[i];
	}
	if (mag1>mag2)
		return true;
	return false;
}
bool Vector::operator>=(const Vector & secondOperand)
{
  double mag1=0,mag2=0;
	for(int i=0;i<m_dimension;i++)
  {
		mag1+=m_data[i]*m_data[i];
		mag2+=secondOperand[i]*secondOperand[i];
	}
	if (mag1>=mag2)
		return true;
	return false;
}
double & Vector::operator[](int index)
{
  return m_data[index];
}
double & Vector::operator[](int index) const
{
  return m_data[index];
}
Vector Vector::operator+(const Vector & secondOperand)
{
  Vector result(m_dimension);
  for(int i=0;i<m_dimension;i++)
  {
    result.m_data[i]=m_data[i]+secondOperand[i];
  }
  return result;
}
Vector& Vector::operator+=(const Vector & secondOperand)
{
  for(int i=0;i<m_dimension;i++)
  {
    m_data[i]+=secondOperand[i];
  }
  return *this;
}
Vector Vector::operator-(const Vector & secondOperand)
{
  Vector result(m_dimension);
  for(int i=0;i<m_dimension;i++)
  {
    result.m_data[i]=m_data[i]-secondOperand[i];
  }
  return result;
}
Vector& Vector::operator-=(const Vector & secondOperand)
{
  for(int i=0;i<m_dimension;i++)
  {
    m_data[i]-=secondOperand[i];
  }
  return *this;
}
double Vector::operator*(const Vector & secondOperand)
{
  double result=0;
  for(int i=0;i<m_dimension;i++)
  {
    result+=m_data[i]*secondOperand[i];
  }
  return result;
}
Vector Vector::operator*(const double multiplier)
{
  Vector result(m_dimension);
  for(int i=0;i<m_dimension;i++)
  {
    result.m_data[i]=m_data[i]*multiplier;
  }
  return result;
}
Vector& Vector::operator*=(const double multiplier)
{
  for(int i=0;i<m_dimension;i++)
  {
    m_data[i]*=multiplier;
  }
  return *this;
}
Vector Vector::operator/(const Vector & secondOperand)
{
  Vector result(m_dimension);
  for(int i=0;i<m_dimension;i++)
  {
    result.m_data[i]=m_data[i]/secondOperand[i];
  }
  return result;
}
Vector& Vector::operator/=(const Vector & secondOperand)
{
  for(int i=0;i<m_dimension;i++)
  {
    m_data[i]/=secondOperand[i];
  }
  return *this;
}
Vector Vector::operator/(const double divider)
{
  Vector result(m_dimension);
  for(int i=0;i<m_dimension;i++)
  {
    result.m_data[i]=m_data[i]/divider;
  }
  return result;
}
Vector& Vector::operator/=(const double divider)
{
  for(int i=0;i<m_dimension;i++)
  {
    m_data[i]/=divider;
  }
  return *this;
}
double Vector::operator()()
{
  double mag=0;
  for(int i=0;i<m_dimension;i++)
  {
    mag+=m_data[i]*m_data[i];
  }
  return sqrt(mag);
}
Vector& Vector::operator!()
{
  for(int i=0;i<m_dimension;i++)
  {
    m_data[i]*=-1;
  }
  return *this;
}
std::ostream& operator<<(std::ostream& os, Vector& v)
{
  os<<"["<<std::fixed<<std::setprecision(3);
  for(int i=0;i<v.getDimension();i++)
  {
    os<<std::setw(8)<<v[i];
    if(i!=v.getDimension()-1)
      os<<",";
  }
  os<<"]";
  return os;
}
std::istream& operator>>(std::istream& is, Vector& v)
{
  for(int i=0;i<v.getDimension();i++)
  {
    is>>v[i];
  }
  return is;
}
