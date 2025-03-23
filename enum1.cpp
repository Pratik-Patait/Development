#include<iostream>

using namespace std;

int main()
{
	enum Days {Sun,Mon,Tue,Wed,Thu,Fri,Sat};
	enum Days obj;
	obj = Tue;
	int Input = 0;
	
	cout<<obj<<"\n";
	cout<<sizeof(obj)<<"\n";
	
	enum Gender{Female = 1,Male = 2};//explicitly initialize the value,but value should be integral(integer)
	
	cout<<"Enter Sr.no of your Gender\n";
	cout<<"1: Female\n";
	cout<<"2: Male\n";
	
	cin>>Input;
	
	switch(Input)
	{
		case Female:
		cout<<"Tax free limit is 3,00,000\n";
		break;
			
		case Male:
		cout<<"tax free lilmit is 2,50,000\n";
		break;
		
		default:
			cout<<"Invalid Gender\n";
			break;
	}
	return 0;
}