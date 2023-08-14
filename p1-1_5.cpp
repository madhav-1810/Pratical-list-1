#include<iostream>
using namespace std;

int main()
{
	int a[5],i;

	cout<<"I am Madhav Vasani "<<endl;
	cout<<"En_no    220130318118 "<<endl;
	cout<<"---------------------"<<endl;

	cout<<"Enter elements of array :: ";
	
	for(i = 0; i < 5; i++)
	{
		cin>>a[i];
	}	
	
	cout<<"The negative element of array are :: ";
	
	for(i = 0; i < 5; i++)
	{
		if(a[i] < 0)
		{
			cout<<a[i]<<endl;		
		}
	}
	
	return 0;
}
