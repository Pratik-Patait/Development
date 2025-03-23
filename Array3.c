#include<stdio.h>

int main();
{
	//Arr is one dimentional array which contains 4 elements 
	//each element is of type integer

	int Arr[4];
	
	//Brr is two dimentional array which contains 3 one dimentional array
	// each one dimentional array contains 4 elements 
	//and each elements is of type integer
	
	int Brr[3][4];
	
	//Drr is two dimentional array which contains 5 one dimentional array
	// each one dimentional array contains 3 elements 
	//and each elements is of type double
	
	double Drr[5][3];
	
	// p is a pointer which holds address of integer,currently it hold address of no,
	//where no is a variable of type integer initialized with the value 11
	
	int no = 11;
	int*p = &no;	
	
	// no			11
	// &no			100
	// p			100
	// &p			200
	//*p			11
	// sizeof(no)	4
	// sizeof(p)	8
	// sizeof(*p)	4	
	
	return 0;
	
}