#include<iostream>

using namespace std;

class Base1
{	
	public:
		int x,y;
		
		Base1()
		{
			cout<<"Base1 constructor\n";
		}
		~Base1()
		{
			cout<<"Base1  Destructor\n";
		}
		
};
class Base2
{	
	public:
		int x,y;
		
		Base2()
		{
			cout<<"Base2 constructor\n";
		}
		~Base2()
		{
			cout<<"Base2 Destructor\n";
		}
		
};

class Derived: public Base2,Base1	//varti class kutlya pan sequence madhe lihi, call honar jasa ya line var lihilay tyach sequence madhe 
{
	public:
		int a;
		Derived()
		{
			cout<<"Derived constructor\n";
		}
		~Derived()
		{
			cout<<"Derived destructor\n";
		}		
};


int main()
{
	Derived dobj;
		
	return 0;
}