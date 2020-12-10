#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n){
	for(int i = 0; i< n; ++i){
		os<<a[i]<<endl;
	}
};
void array_values(int* tomb, int n)
{	
	for (int i = 0; i < n; ++i){
		tomb[i] = 100+i;
	}
}
int main ()
{
	int* tomb = new int [10];
	
	
	/*for(int i = 0; i<10;++i){
		cout<<tomb[i]<<endl;
	}*/
	int* tomb2 = new int [10];
	array_values(tomb2, 10);
	int* tomb3 = new int [11];
	array_values(tomb3, 11);
	int* tomb4 = new int [20];
	array_values(tomb4, 20);
	
	print_array(cout,tomb,10);
	cout<<endl;
	print_array(cout,tomb2,10);	
	cout<<endl;
	print_array(cout,tomb3,11);
	cout<<endl;
	print_array(cout,tomb4,20);
	
	delete[] tomb;
	delete[] tomb2;
	delete[] tomb3;
	delete[] tomb4;
 	  
	return 0;
}
