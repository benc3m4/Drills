#include "std_lib_facilities.h"

	constexpr double m = 1;
	constexpr double cm = m/100;
	constexpr double in = 2.54*cm;
	constexpr double ft = 12*in;

double unit_to_m (double length, string unit){
	if(unit == "m")
		length *= m;
	if(unit == "cm")
		length *= cm;
	if(unit == "in")
		length *= in;
	if(unit == "ft")
		length *= ft;
		
		return length;		
}

double m_to_unit (double length, string unit){
	if(unit == "m")
		length /= m;
	if(unit == "cm")
		length /= cm;
	if(unit == "in")
		length /= in;
	if(unit == "ft")
		length /= ft;
		
		return length;	


}

int main (){
/*		
		//1.
		double value_first;
		double value_second;
			
		//2.
		double value_min = numeric_limits<double>:: max();
		double value_max = numeric_limits<double>:: lowest();
		double value;

		if(value < value_min){
			value_min = value;
			cout<<"The smallest so far: "<<value<<endl;
		}
		if(value > value_max){
			value_max = value;
			cout<<"The largest so far: "<<value<<endl;
		}
		cout<<value<<endl;
		
		//2.end
		
		while(cin >> value_first >> value_second){
		cout <<"The first value is :"<<value_first<<" and the second value is :"<<value_second<<endl;
		

		if(value_first > value_second){
			cout <<"The larger value is: "<<value_first<<endl;
			cout <<"And the smaller value is: "<<value_second<<endl;
		}
		else if(value_second > value_first){ 
			cout <<"The larger value is: "<<value_second<<endl;
			cout <<"And the smaller value is: "<<value_first<<endl;
		}
		else if(value_first == value_second){
			cout <<"The numbers are equal."<<endl;
		}
		if(abs(value_first - value_second)< 0.01){
			cout <<"The numbers are almost equal."<<endl;

		}
	}
		//1.end
*/
	double length ;
	string unit ;
	double sum = 0;
	
	double value_min = numeric_limits<double>:: max();
	double value_max = numeric_limits<double>:: lowest();
	string unit_min;
	string unit_max;
	vector<double> vel;
	
	
	cout <<"Please enter a length followed by a unit"<<endl;
	
	while(cin >> length >> unit ){
	if(unit != "m" && unit!= "cm" && unit!= "in" && unit != "ft"){
		cout<<"Error, unit not recognized."<<endl;
		}
		

	length = unit_to_m(length,unit);
	vel.push_back(length);
	
	
	if(length > value_max){
		unit_max = unit;
		value_max = length;
		
		}
	if(length < value_min){
		unit_min = unit;
		value_min = length;
		}
	sum += length;
	}
	
	
	cout<<"The largest number is: "<<m_to_unit(value_max,unit_max)<<unit_max<<endl;
	cout<<"The smallest number is: "<<m_to_unit(value_min,unit_min)<<unit_min<<endl;
	cout<<"The numbers sum is: "<<sum<<" m"<<endl;
	
		
		
	sort(vel.begin(), vel.end());
	cout<<"The numbers are: ";
	for(int i=0 ; i<vel.size(); i++){
		
		
		cout<<vel[i]<<"m ";
		
	}	
	cout<<endl;
	
	
	
	return 0;
}


























