#include "std_lib_facilities.h"

int main ()
{
	//int* p1 = new int;
	
	/*p1 = 7;
	cout<<"p1 is: "<<*p1<<endl;
	int* tomb = new int[7]{1,2,4,8};
	int* p2 = tomb;
	cout <<"p2 is: "<<*p2<<endl;
	int* p3 = p2;
	*p1 = *p2;
	*p3 = *p2;
	cout<<"p1 is: "<<*p1<<"\t p2 is: "<<*p2<<endl;*/
	int* tomb2 = new int[10]{1,2,4,8};
	int* p1 = tomb2;
	int* tomb3 = new int[10];
	int* p2 = tomb3;
	
	for(int i = 0; i<10; ++i){
		tomb3[i] = p1[i];	
	
	}
	cout<<p2<<endl;
	cout<<&p2[1]<<endl;
	for(int i = 0; i<10; ++i){
		cout<<"tomb3"<<"("<<i<<")"<<".is: "<<tomb3[i]<<endl;
		
	}
	cout<<endl;
	vector <int> array = {1,2,4,8,0,0,0,0,0,0};
	int* q1 = &array[0];
	vector <int> array_2(10);
	int* q2 = &array_2[0];
	
	for(int i = 0; i<10; ++i){
		array_2[i] = array[i];
	}
	
	for(int i = 0; i<10; ++i){
		cout<<"array"<<"("<<i<<")"<<".is: "<<array[i]<<endl;
	}

	
	
	
	
	
	//delete[] tomb;
	delete[] tomb2;
	delete[] tomb3;
	
	
	




	return 0;
}
