#include<stdio.h>

int main()
{
    int iValue1 = 0,iValue2 = 0;
    float A = 0, B = 0;
    
    scanf("%d %d",&iValue1,&iValue2);
    scanf("%f %f",&A,&B);
    
    int iAdd = iValue1 + iValue2;
    int iSub = iValue1 - iValue2;
    
    float fAdd = A + B;
    float fSub = A - B;
    
    printf("%d %d\n",iAdd, iSub);
    printf("%.1f %.1f \n",fAdd, fSub);
    
    return 0;
    
}
