#include<iostream>

using namespace std;

class Demo
{
	public:
		int i;
		const int j;	//Constant characteristics
		
		
		
		
		Demo(int a,int b) :i(a),j(b)
		{
			cout<<"Inside parameterised constructor\n";
		}
		
		void fun()
		{
			cout<<"Inside fun\n";
			i++;	//Allowed
			//j++  //Not Allowed
		}
		//b is a cosntant input argument
		void gun(int a,const int b)const	//constant function behaviour
		{
			int x = 10;
			const int y = 20;	//constant local variable
			cout <<"Inside gun\n";
			//i++; //Not Allowed
			//j++; //Not Allowed
			x++; 	//Allowed
			//y++;	//Not Allowed
			a++;	//Allowed
			//b++;	//Not Allowed
		}
		
	
};
int main()
{
	Demo obj1(11,21);
	const Demo obj2(11,21);	
	
	obj1.fun();
	obj1.gun(10,20);
	
	//obj2.fun();
	obj2.gun(10,20);
	
	return 0;
}