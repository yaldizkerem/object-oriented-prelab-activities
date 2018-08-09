#include "Date.h"



Date::~Date()
{
}

Date::Date()
{
}

Date::Date(int day, int month, int year):day(day),month(month),year(year)
{

}

int Date::getDay() const
{
	return day;
}

int Date::getMonth() const
{
	return month;
}

int Date::getYear() const
{
	return year;
}

Date & Date::setDay(int day)
{
	this->day = day;
	return *this;
}

Date & Date::setMonth(int month)
{
	this->month = month;
	return *this;
}

Date & Date::setYear(int year)
{
	this->year = year;
	return *this;
}


bool Date::operator<(Date & date)
{
	if (year < date.getYear()) {
		return true;
	}
	else if (year == date.getYear()) {
		if (month < date.getMonth()) {
			return true;
		}
		else if (month == date.getMonth()) {
			if (day <= date.getDay()) {
				return true;
			}
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}

bool Date::operator>(Date & date)
{
	if (year > date.getYear()) {
		return true;
	}
	else if (year == date.getYear()) {
		if (month > date.getMonth()) {
			return true;
		}
		else if (month == date.getMonth()) {
			if (day >= date.getDay()) {
				return true;
			}
			else
				return false;
		}
		else
			return false;
	}
	else
		return false;
}
std::ostream & operator<<(std::ostream & os, Date & date)
{
	os << date.getDay() << "-" << date.getMonth() << "-" << date.getYear();
	return os;
}
