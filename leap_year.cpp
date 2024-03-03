#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter the Year: ";
	cin>>year;
	
	if(year%4==0)
	{
		cout<<"You entered year is leap year..."<<endl;
	}
	else
	{
		cout<<"You entered year is not leap year...."<<endl;
	}
	
	return 0;
}
	
