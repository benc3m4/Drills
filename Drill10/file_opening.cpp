#include "std_lib_facilities.h"

struct Point {

	int x = 0;
	int y = 0;
};

bool operator!=(const Point& vec1,const Point& vec2){
	if(vec1.x == vec2.x && vec1.y == vec2.y) return 0;
	return 1;

}
int main(){

try {
	
	cout << "Input seven (x,y) pairs!"<<endl;
	vector<Point> original_points;
	int x;  
	int y;
	for(int i = 0; i<7; ++i){
		cin>>x>>y;
		original_points.push_back(Point{x,y}); 
	}

	/*if(points.size() != 7){
			error("You have not given 7 pairs of numbers");
		}*/

	for (const auto& p : original_points)
		cout << p.x << ' ' << p.y << endl;

		cout << "Please enter output file name: ";
	string oname;
	cin >> oname;

	ofstream ost {oname};

	if (!ost) error ("can't open output file ", oname);
	for(Point p: original_points)
		ost<<"("<<p.x<<","<<p.y<<")"<<endl;
	
	ost.close();

	ifstream ist {oname};

	if (!ist) error ("can't open input file ", oname);

	vector <Point> processed_vector;

	while(true){	

		ist.get();	
		ist>>x;
		ist.get();
		ist>>y;
		ist.get();
		ist.get();
		if(ist.eof()) break;
		processed_vector.push_back(Point{x,y});


	}


	for(const auto& p: processed_vector)
		cout<<"("<<p.x<<","<<p.y<<")"<<endl;

	for(int i = 0 ; i<processed_vector.size(); ++i){
		if(processed_vector[i] != original_points[i]){
			cout<<"Something's wrong!"<<endl;
		}
	}

	return 0;

} catch (runtime_error& e) {
	cout << "Error: " << e.what() << endl;
	return 1;
} catch (...) {
	cout << "Some error happened\n";
	return 2;
}
}