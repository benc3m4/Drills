#include "std_lib_facilities.h"

struct Data{
	string first_name;
	string last_name;
	long int telefon_number;
	string email_adress;

};
void print(int x){
	cout << "decimal: "<<"\t"<<x<<endl;
	cout<<"hexadecimal: "<<"\t"<<hex<<x<<endl;
	cout<<"octal: "<<oct<<"\t"<<x<<endl;
	cout<<showbase<<dec;

}
int main (){
	int my_age = 18;
	int birth_year = 2002;
	print(birth_year);

	cout<<"My age: "<<my_age<<endl;
	print(my_age);

	int a;
	int b;
	int c;
	int d;

	cin>>a>>oct>>b>>hex>>c>>d;
	cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<d<<endl;

	cout<<1234567.89<<"\t (defaultfloat)\n"<<fixed<<1234567.89<<"\t (fixed)\n"<<scientific<<1234567.89<<"\t (scieentific)\n";

	
	Data szemelyek[6] {
		{"Bence", "Misztl", 1043143223, "misztl.bence@gmail.com"},
		{"Kristóf", "Tóth",1432534534, "toth.kristof@gmail.com"},
		{"Béla", "Kiss", 2342443253, "kiss.bela@gmail.com"},
		{"Jónás", "Patak",4231423142, "patak.jonas@gmail.com"},
		{"Patrik", "Lovas", 7576476463, "lovas.patrik@gmail.com"},
		{"Gergő", "Geret", 213413124, "geret.gergő@gmail.com"}

		// Bence   | Misztl | ..........................
		// Kristóf | Tóth   | ...........................

	};

	for (int i = 0; i<5; ++i){
		cout<<szemelyek[i].first_name<<"\t"<<"|"<<szemelyek[i].last_name<<"\t"<<"|"<<szemelyek[i].telefon_number<<"\t"<<"|"<<szemelyek[i].email_adress<<"\n";
	}
	



	return 0 ;
}
