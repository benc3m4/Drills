#include "std_lib_facilities.h"

int main (){
	
	
	string first_name;
	cout<<"Enter ur name"<<endl;
	cin>>first_name;
	
	cout<<"Hello, "<<first_name<<endl;
	
 	cout<<"Enter the name of person you want to write to"<<endl;
	
	
	cin >> first_name;
	
	cout << "Dear "<<first_name<<","<<endl;
	cout <<"  How are you? I am fine. I miss you."<<endl;
	cout <<"What is your other friend name?"<<endl;
	
	string friend_name;
	cin >>friend_name;
	
	cout<<"Have you seen "<<friend_name<<" lately?"<<endl;

	char friend_sex = '0';

	cout <<"Is your friend male(m) or female(f) ?"<<endl;

	cin >> friend_sex;

	if(friend_sex == 'm')
		cout<<"If you see "<<friend_name<<" please ask him to call me."<<endl;
	if(friend_sex == 'f')
		cout<<"If you see "<<friend_name<<" please ask her to call me."<<endl;
	
	
	int age;

	cout<<"What is your friend age?"<<endl;
	cin  >> age;
	if(age <= 0 || age >= 110)
		simple_error("u're kidding !");
	cout<<"I hear you just had a birthday and u are "<<age<<" years old."<<endl;
	if(age < 12)
		cout<<"Next year you will be "<<age+1<<"."<<endl;
	else if(age == 17)
		cout<<"Next year you will be able to vote."<<endl;
	else if(age>70)
		cout<<"I hope u are enjoying retirement."<<endl;
	string signature;
	cout<<"Your sincerely, "<<endl;
	cout<<" "<<endl;
	cin>>signature; 
	
	


}
