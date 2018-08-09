#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <string>
using namespace std;
class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int day ,int month,int year);
  ~Date();
	int getDay() const;
	int getMonth()const;
	int getYear() const;
	bool operator <(Date & date);
	bool operator >(Date & date);
	Date & setDay(int day);
	Date & setMonth(int month);
	Date & setYear(int year);
};
std::ostream & operator<<(std::ostream & os, Date & date);
#endif
