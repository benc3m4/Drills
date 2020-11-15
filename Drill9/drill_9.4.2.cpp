#include "std_lib_facilities.h"

struct Date {            // or class - public

	int year, month, day;
	Date(int y, int m, int d);
	void add_day(int d);
};

Date::Date(int y, int m, int d)
{
	if (y > 0)
		year = y;
	else
		error("Invalid year");
	if (m <= 12 && m > 0)
		month = m;
	else
		error("Invalid month");
	if (d > 0 && d < 32)
		day = d;
	else
		error("Invalid day");
}

void Date::add_day(int d)
{
	day += d;
	if (day > 31) 
	{
		month++;
		day -= 31;
		if (month > 12)
		{
			year++;
			month -= 12;
		}
	}
}

int main()
try {
	//Valid date -----------------------------------------------------------------------
	Date today {2020, 11, 11};
	cout << "Date: " << today.year << "." << today.month << "." << today.day << endl;
	
	today.add_day(1);
	cout << "Date: " << today.year << "." << today.month << "." << today.day << endl;
	
	//Invalid date ---------------------------------------------------------------------
	Date today_2 {-1111,11,1};
	cout << "Date: " << today_2.year << "." << today_2.month << "." << today_2.day <<endl;
	
	//Invalid month --------------------------------------------------------------------
	Date today_3 {2020,15,23};
	cout << "Date: " << today_3.year << "." << today_3.month << "." << today_3.day <<endl;
	return 0;
} catch (exception& e) {
	cout << "Error: " << e.what() << endl;
	return 1;
}
