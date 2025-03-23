#include<iostream>
using namespace std;

class Demo
{
	public:
		int Add(int no1,int no2);	//Declaration inside class
		int Sub(int no1,int no2);	
		 
};
int Demo::Add(int no1,int no2)	//Defination outside class
	{
		int Ans = 0;
		Ans = no1 + no2;
		return Ans;
	}

int Demo::Sub(int no1,int no2)	
	{
		int Ans = 0;
		Ans = no1 - no2;
		return Ans;
	}

int main()	
{
	Demo obj;
	
	int ret = 0;
	
	ret = obj.Add(10,11);
	cout<<"Addition is : "<<ret<<"\n";	//21
	
	
	return 0;
}