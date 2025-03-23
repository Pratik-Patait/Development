#include<iostream>

using namespace std;
class Demo
{
	public:
		int i;
	protected:
		int j;
	private:
		int k;
		
	public:
		Demo()
		{
			i = 10;
			j = 20;
			k = 30;
		}
	friend void fun();// function declaration
};
void fun()	//function defination
{
	Demo obj1;
	cout<<obj1.i<<"\n";
	cout<<obj1.j<<"\n";
	cout<<obj1.k<<"\n";
}
int main()
{
	fun();	//function call
	return 0;
}