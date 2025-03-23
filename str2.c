#include<stdio.h>
#include<string.h>

int strlenX(char str[])	//First Logic
{
	int iCnt = 0;
	int iLength = 0;
	
	for(iCnt = 0;str[iCnt] != '\0';iCnt++)
	{
		iLength++;
	}
	return iLength;
}
/////////////////////////////////////
//
// Fucntion name : strlenXXX
// Input :			Address of character array
// Output :			Length of string in integer
// Description :	It is used to calculate length of string
// Author :			Pratik Mohan Patait
// Date : 			17/01/2025
//
///////////////////////////////////
int strlenXXX(const char *str)	//Second Logic
{
	int iCnt = 0;
	
	while((*str) !='\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}
int strlenXX(char str[])	//Third Logic
{
	int iCnt = 0;
	int iLength = 0;
	
	while(str[icnt] != '\0')
	{
		iCnt++;
		iLenght++;
	}
	return iLength;
}
int main()
{
	char Arr[20] = {'\0'};
	int iRet = 0;
	
	printf("Enter your name : \n");
	scanf("%s",Arr);
	
	printf("Entered name is : %s\n",Arr); 
	
	iRet = strlenXXX(Arr);
	printf("String length is :%d\n",iRet);
	
	


	return 0;
}