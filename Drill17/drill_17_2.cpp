#include "std_lib_facilities.h"

void print_vector(ostream& os,const vector<int>& numbers){
	for(int i = 0; i< numbers.size(); ++i){
		os<<numbers[i]<<endl;
	}
};
void vector_values(vector<int>& numbers, int n)
{	
	for (int i = 0; i < n; ++i){
		numbers.push_back(100+i);
	}
}


int main(){
	
	vector <int> numbers;
	vector <int> numbers_2;
	vector <int> numbers_3;
	
	
	vector_values(numbers, 10);
	vector_values(numbers_2, 11);
	vector_values(numbers_3, 20);
	
	int* p0 = &numbers[0];
	int* p1 = &numbers_2[0];
	int* p2 = &numbers_3[0];
	
	print_vector(cout, numbers);
	print_vector(cout, numbers_2);
	print_vector(cout, numbers_3);
	
	
	
	



 return 0;
}
