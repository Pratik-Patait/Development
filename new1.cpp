#include<iostream>

using namespace std;

class Demo
{
	public :
	int x;
	int y;
	Demo()
	{
		cout<<"Inside default constructor\n";
	}
	~Demo()
	{
		cout<<"Inisde desstructor\n";
	}
	void fun()
	{
		cout<<"Inside fun\n";
	}
};

int main()
{
	Demo obj;
	
	Demo *ptr = NULL;
	
	ptr = new Demo;
	
	obj.fun();
	
	ptr->fun();
	
	dedlete ptr;
	
	return 0;
}