#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	int num1=rand()%900+100;
	int num2=rand()%900+100;
	int answer=num1+num2;
	cout<<" "<<num1<<endl;
	cout<<"+"<<num2<<endl;
	cout<<"________"<<endl;
	cout<<"\n Press Enter to see the answer...";
	cin.get();
	cout<<"\n"<<num1<<endl;
	cout<<"+"<<num2<<endl;
	cout<<"________"<<endl;
	cout<<" "<<answer<<endl;
	return 0;
}
