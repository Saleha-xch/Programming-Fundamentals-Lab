#include<iostream>
using namespace std;
int main(){
	int qty=5;
	int SalesReps=2;
	float unitsEach1,unitsEach2;
	unitsEach1=qty/SalesReps;
	unitsEach2= (float)qty/SalesReps;
	cout<<"Without cast(int division):"<<unitsEach1<<endl;
	cout<<"with cast(float division)"<<unitsEach2<<endl;
	return 0;
}
