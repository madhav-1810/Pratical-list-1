#include<iostream>
using namespace std;

class fahToCel{
	
	private:
		int	fah, cel;
		
	public:
		void getdata()
		{
			cout<<"Enter fahrenheit :: ";
			cin>>fah;
			
			cel = (fah - 32) * 5/9;
		
		}
		void putdata()
		{
			cout<<"Celcius :: "<<cel; 
		}
		 
}; 

int main()
{
		fahToCel fc;

		cout<<"I am Madhav Vasani "<<endl;
		cout<<"En_no    220130318118 "<<endl;
		cout<<"---------------------"<<endl;

		fc.getdata();
		fc.putdata();
		fc.getdata();
		fc.putdata();
		fc.getdata();
		fc.putdata();
		fc.getdata();
		fc.putdata();
		fc.getdata();
		fc.putdata();
		return 0;
}
