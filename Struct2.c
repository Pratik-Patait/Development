#include<stdio.h>
// Structure Declaration
struct Demo
{
	int iNo;
	float fValue;
	int iValue;
	
}; 
int main()
{
	struct Demo Arr[4];
	
	Arr[0].iNo = 11;
	Arr[0].fValue = 10.11;
	Arr[0].iValue = 21;
	
	Arr[1].iNo = 51;
	Arr[1].fValue = 20.11;
	Arr[1].iValue = 101;
	
	return 0;
}