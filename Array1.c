#include<stdio.h>
int main()
{
	int no = 11;
	//Array Defination
	int Arr[5];	//Arr is one dimensional array, which contains five elements, and each element is  of type integer
	
	//Array member initialization
	//Member by member initialization
	Arr[0] = 11;
	Arr[1] = 21;
	Arr[2] = 51;
	Arr[3] = 101;
	Arr[4] = 111;
	
	//Member initialization list
	int Brr[5] = {11,21,51,101,111,};
	
	int Crr[] = {11,21,51,101,111};
	
	// int Drr[]; not allowed will generte error
	
	return 0;
}