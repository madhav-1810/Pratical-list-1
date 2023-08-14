#include<iostream>
using namespace std;

int main()
{
	int num;

	cout<<"I am Madhav Vasani "<<endl;
	cout<<"En_no    220130318118 "<<endl;
	cout<<"---------------------"<<endl;

	cout<<"Enter the number :: ";
	cin>>num;
	
	if(num == 0)
	{
		cout<<"The number is zero";
	}
	else if(num % 2 == 0)
	{
		cout<<"The number is even";
	}
	else
	{
		cout<<"The number is odd";
	}
	
	return 0;
}
