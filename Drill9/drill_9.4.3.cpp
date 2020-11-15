#include "std_lib_facilities.h"

class Date {
private:	
	int year;
	int month;
	int day;
public:
	class Invalid {};
	Date(int y, int m, int d): year(y), month(m), day(d) { if (!is_valid()) throw Invalid {}; }
	bool is_valid();
	void add_day(int n);
	
	int get_year(){ return year; }
	int get_month(){ return month; }
	int get_day(){ return day; }
};

bool Date::is_valid()
{
	if (month < 1 || month > 12 || year < 0 || day < 1 || day > 31){
		return false;
	}else
		return true;
}

void Date::add_day(int n)
{
	day += n;
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
	//Valid date -------------------------------------------------------------------------
	Date today {2020, 10, 11};
	cout << "Todays date: " << today.get_year() << "." << today.get_month() << "." << today.get_day() << endl;
	
	Date christmas {2020,12,31};
	christmas.add_day(1); // 2020.12.31 + 1
	cout << "2020 Christmas date (+1 day): " << christmas .get_year() << "." << christmas .get_month() << "." << christmas .get_day() << ".\n";
	
	//Invalid date -----------------------------------------------------------------------
	Date invalid_date {2020, 11, 32};
	cout << "Date: " << invalid_date .get_year() << "." << invalid_date .get_month() << "." << invalid_date .get_day() << endl;

	return 0;
	
} catch (Date::Invalid) {
	cout << "Error: Invalid date\n";
	return 1; 
} catch (exception& e) {
	cout << "Error: " << e.what() << endl;
	return 2;
}
