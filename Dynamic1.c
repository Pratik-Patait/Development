#include<stdio.h>
#include<stdlib.h>


int main()
{
	int size = 0;
	int *ptr = NULL;
	
	printf("Enter number of elements : ");
	scanf("%d",&size);
	
	ptr = (int*)malloc(size * sizeof(int));	//Step1 : Allocate the memory
	if(ptr == NULL)
	{
		printf("Unable to allocate memory\n");
	}
	else
	{
		printf("Memory successfully allocated\n");
	}
	//Step 2 : Use the memory
	
	free(ptr);	//Step 3 : Free the memory
	return 0;
}