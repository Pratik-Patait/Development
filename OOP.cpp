#include<iostream>
using namespace std;

class Arithematic
{
	public:
	//Characteristics
	int iNo1;
	int iNo2;
	
	//Behaviour
	
	Arithematic()
	{
		cout<<"Inside default constructor\n";
		iNo1 = 0;
		iNo2 = 0;
	}
	
	Arithematic(int A, int B)
	{
		cout<<"Inside Parameterised constructor\n";
		iNo1 = A;
		iNo2 = B;
	}
	
	~Arithematic()
	{
		cout<<"Inside destructor\n";
	}
	int Addition()
	{
		int iAns = 0;
		iAns = iNo1 + iNo2;
		return iAns;
	}
		
	int Substraction()
	{
		int iAns = 0;
		iAns = iNo1 - iNo2;
		return iAns;
	}
};


int main()
{
	int iValue1 = 0, iValue2 = 0, iRet = 0;
	
	cout<<"Enter first number\n";
	cin>>iValue1;
	
	cout<<"Enter second number\n";
	cin>>iValue2;
	
	Arithematic obj1;
	Arithematic obj2(iValue1, iValue2);
	
	return 0;
}