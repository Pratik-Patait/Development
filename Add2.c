#include<stdio.h>

int iAdd(int iNo1,int iNo2)
{
	int iAns = 0;
	iAns = iNo1 + iNo2;
	return iAns;
	
}
int iSub(int iNo1,int iNo2)
{
	int iAns = 0;
	iAns = iNo1 - iNo2;
	return iAns;
}
int fAdd(float fNo1,float fNo2)
{
	float fAns = 0;
	fAns = fNo1 + fNo2;
	return fAns;
	
}
float fSub(float fNo1,float fNo2)
{
	float fAns = 0;
	fAns = fNo1 - fNo2;
	return fAns;
}

int main()
{
	int iA =  0,iB = 0,iC = 0,iD = 0;
	float fA = 0,fB = 0,fC = 0,fD = 0;
	
	scanf("%d %d",&iA,&iB);
	scanf("%f %f",&fA,&fB);
	
	iC = iAdd(iA,iB);
	iD = iSub(iA,iB);
	printf("%d %d\n",iC,iD);
	
	fC = fAdd(fA,fB);
	fD = fSub(fA,fB);
	printf("%.1f %.1f\n",fC,fD);

	return 0;

}