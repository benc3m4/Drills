#include "std_lib_facilities.h"

class Year {
	static constexpr int min_year = 1800;
	static constexpr int max_year = 2200;
public:
	class Invalid{};
	Year (int x): y{x} { if (x<min_year || x>max_year) throw Invalid{}; } //error
	int year() const { return y; }
	void increment() { y++; }
	
private:
	int y;
	
};
Year operator++(Year& year) //y++
{
	year.increment();
	
}

ostream& operator<< (ostream& os, Year year)
{
	return os << year.year();
}

const vector<string> months = 
{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"Dezember"
};
enum class Month {
	jan, feb, mar, apr, may, jun, july, aug, sept, oct, nov, dec
	// 0 - 11
};

Month operator++(Month& m)
{
	m = (m==Month::dec) ? Month::jan : Month(int(m)+1); // if month == dec then jan else month+1
	return m;
}

ostream& operator<<(ostream& os, Month m)
{
	return os << months[int(m)];
}


class Date {
	Year year; //int year -> Year year
	Month month; //int month -> Month month
	int day;
public:
	class Invalid {};
	Date(): year(Year{1978}), month(Month::jan), day(25) {}
	Date(Year y, Month m, int d): year(y), month(m), day(d) { if (!is_valid()) throw Invalid {}; }
	void add_day(int n); 
	const bool is_valid(); // valid or invalid date
	Year get_year() const { return year; } //Getter
	Month get_month() const { return month; } //Getter
	int get_day() const { return day; } //Getter

};
ostream& operator <<(ostream& ost, Date& date){ //cout<<today
	
	return ost <<date.get_year()<<"."<<date.get_month()<<"."<<date.get_day();

}

bool Date::is_valid() const
{
	if (day < 1 || day > 31) {
	return false;
	}else	return true;
}

void Date::add_day(int n)
{
	day += n;
	if (day > 31) 
	{
		++month;
		day -= 31;
		if (month == Month::jan)
		{
			++year;
		}
	}
}

int main()
try {
	//Valid date ---------------------------------------------------------------------
	Date today {Year{2020}, Month::nov, 11};
	//<<today operator
	cout<<today<<endl;
	
	cout << "Todays date: " << today.get_year() << "." << today.get_month() << "." << today.get_day() <<endl;
	today.add_day(1);
	//Tomorrow date 
	cout << "Date: " << today.get_year() << "." << today.get_month() << "." << today.get_day() <<endl;
	
	//Invalid date -------------------------------------------------------------------
	Date invalid_date {Year{2020},Month::jan,33};
	cout << "Date: " << invalid_date.get_year() << "." << invalid_date.get_month() << "." << invalid_date.get_day() << endl;
	

	return 0;

} catch (Date::Invalid) {  //Invalid date exception
	cout << "Error: Invalid date\n";
	return 1; 
} catch (Year::Invalid) { //Invalid year exception
	cout << "Error: Invalid year\n";
	return 2; 
} catch (exception& e) {
	cout << "Error: " << e.what() << endl;
	return 3;
}
