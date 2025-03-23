#include<stdio.h>


int Additon(int iNo1, int iNo2)
{
	int Ans = 0;
	Ans = iNo1 + iNo2;
	return Ans; 
}
int main()
{
	int A = 10;
	int B = 20;
	int C = 0;
	
	C = Additon(A,B);
	
	
	printf("Additon is : %d\n",C);
	
	
	
	return 0;
}