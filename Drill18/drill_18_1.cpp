#include "std_lib_facilities.h"

int ga [10] = {1,2,4,8,16,32,64,128,256,612};

void f (int* array, int n){

	int la [10];
	for(int i = 0; i<10; ++i){
		la[i] = ga[i];
		cout<<"la: "<<la[i]<<endl;
		}
	cout<<endl;
	int* p = new int [n];
	
	for(int i = 0; i<n; ++i){
  		p[i] = array[i];
		cout<<"p: "<<p[i]<<endl;
	}
	cout<<endl;
	delete[] p;

}
	
void fact(int* tomb, int n)
{	
	tomb[0] = 1;
	for (int i = 1; i < n; ++i){
		tomb[i] = tomb[i-1]*(i+1); 
	}
}
int main(){

	int aa [10];

	f(ga,10);
	fact(aa,10);
	f(aa,10);

	return 0;
}