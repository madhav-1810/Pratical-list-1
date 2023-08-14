#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float years,rate;
	int principle;

	cout<<"I am Madhav Vasani "<<endl;
	cout<<"En_no    220130318118 "<<endl;
	cout<<"---------------------"<<endl;

	cout<<"Enter the principle amount :: ";
	cin>>principle;
	
	cout<<"Enter the rate of interest :: ";
	cin>>rate;
	
	cout<<"Enter the time period (in years) :: ";
	cin>>years;
	
	cout<<"Compound interest is :: "<<principle * pow(1 + rate, years) - principle;

	return 0;
}
