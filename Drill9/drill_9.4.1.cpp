#include "std_lib_facilities.h"

constexpr int mlast = 12;
constexpr int dlast = 31;

struct Date {
	int y;
	int m; 
	int d;
};

void init_date(Date& date, int y, int m, int d)
{
	if (y > 0){
		date.y = y;
	}else 
		error("Invalid year");
	if (m <= mlast && m > 0){
		date.m = m;
	}else  
		error("Invalid month");
	if (d > 0 && d <= dlast ){  
		date.d = d;
	}else 
		error("Invalid day");
}
void add_day(Date& date, int n)
{
	date.d += n;
	if (date.d >= dlast) 
	{
		date.m++;
		date.d -= dlast;
		if (date.m > mlast)
		{
			date.y++;
			date.m -= mlast;
		}
	}
}

int main()
{
	Date today;
	
	// today -----------------------------------------------------------------------
	today.y = 2020;
	today.m = 11;
	today.d = 10;
	cout << "Todays date: " << today.y << "." << today.m << "." << today.d <<endl;
	add_day(today, 1);
	cout << "Tomorrow date: " <<today.y << "." << today.m << "." << today.d <<endl;
	Date today_2;
	init_date(today_2, 2020,11, 10);

	cout << "Todays date: " << today_2.y << "." << today_2.m << "." << today_2.d << endl;
	// today_2 + 1 day -------------------------------------------------------------
	add_day(today_2, 1);

	cout << "Date: " << today_2.y << "." << today_2.m << "." << today_2.d << endl;
	// invalid day -----------------------------------------------------------------
	init_date(today_2, -4, 18, 33);
	
	cout << "Date: " << today_2.y << "." << today_2.m << "." << today_2.d << endl;
	

	return 0;
}
