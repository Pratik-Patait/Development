#include<stdio.h>
//Gharakhalcha dukan
int Addition(int No1, int No2)    //Function Defination
{    //Block chi surwat
	int Ans = 0;				 //Local variable of Addition
	Ans = No1 + No2;			 // Berij Keli by ALU


	return Ans;					 //Jyane call kela tyala value dya
}	//Block cha shewat

int main()						 //Ithun program run hoto
{	//Block chi surwat
	//Local variable of main
	int A = 10;
	int B = 11;
	int C = 0;

	// C mhanaje rikami pishawi
	C=Addition(A,B);			//Function call
	
	printf("%d",C);				//Gharachyanna bolun sanga kay zala te
	
	return 0;					//OS la kalawa ki sagala nit zala
} //Block cha shewat