#include<stdio.h>
void Demo()					//Demo he fucntioin cha naav ahe je tumhi kahi pan deu shakata
{
	auto int A = 10;	 	//auto storage class of the variable
	A++;					//'++' is a operator  jyane value ekane increment hote
	printf("%d\n",A);		//'%d' mhanaje d for decimal
							//'\n' mhanaje apan new line var dispaly karto
	
	
}

void Hello()					
{
	static int A = 10;	 //static mule memory already allocated rahte parat allocate karaychi garaj nahi	
	A++;					
	printf("%d\n",A);		
	
}

int main()
{
	Demo();					//Function call
	Demo();					//Function call
	
	Hello();
	Hello();
	
	return 0;
	
}