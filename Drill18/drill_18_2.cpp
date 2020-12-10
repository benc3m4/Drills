#include "std_lib_facilities.h"

vector <int> gv = {1,2,4,8,16,32,64,128,256,612};

void f(vector<int> &v){

	vector<int> lv (v.size());
	lv.clear();
	for(int i = 0; i<gv.size(); ++i){
		lv.push_back(gv[i]);
		cout<<"lv : "<<lv[i]<<endl;
	
	}
	cout<<endl;
	vector<int> lv2 = v;
	for(int i = 0 ; i<lv2.size(); ++i){
		cout<<"lv2: "<<lv2[i]<<endl;

	}
	cout<<endl;
}
void fact(vector<int> &v,int n)
{	
	v.push_back(1);
	for (int i = 1; i < n; ++i){
		v.push_back(v[i-1]*(i+1));
	}
}
int main(){
	f(gv);
	vector <int> vv ;
	fact(vv,10);
	f(vv);
	
	return 0;
}