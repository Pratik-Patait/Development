#include<stdio.h>
#include<stdlib.h>


int main()
{
	int size = 0;
	int *ptr = NULL;
	
	ptr = (int*)malloc(5*sizeof(int));
	
	ptr = (int*)ralloc(ptr ,7* sizeof(int));	//Step1 : Allocate the memory
	
	ptr = (int*)ralloc(ptr ,3* sizeof(int));
	
	free(ptr);	//Step 3 : Free the memory
	return 0;
}