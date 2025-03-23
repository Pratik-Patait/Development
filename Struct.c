#include<stdio.h>
// Structure Declaration
struct Demo
{
	int iNo;
	float fValue;
	//char ch;
	int iValue;
	//double dValue;
}; 
int main()
{
	
	struct Demo obj2 = {11,10.11,21}; // member initialization list
	
	//Structure object creation
	struct Demo obj1;	// member by member initialization
	obj1.iNo  = 51;
	obj1.fValue = 10.11;
	obj1.iValue = 21;
	//obj.dValue = 20.11;
	
	printf("%d\n",obj1.iNo);
	printf("%d\n",obj2.iNo);
	
	
	return 0;
}