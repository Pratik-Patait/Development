#include<stdio.h>
#include<stdlib.h>


int main()
{
	int size = 0;
	int *ptr = NULL;
	
	printf("Enter number of elements : ");
	scanf("%d",&size);
	
	ptr = (int*)calloc(size , sizeof(int));
	if(ptr == NULL)
	{
		printf("Unable to allocate memory\n");
	}
	else
	{
		printf("Memory successfully allocated\n");
	}
return 0;
}