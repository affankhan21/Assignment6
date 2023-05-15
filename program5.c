#include<stdio.h>
float Percentage(int iNo1,int iNo2)
{
float fNo1;
fNo1=(iNo2*100.0)/iNo1;
return fNo1;


}










 

int main()
{
int iValue1=0,iValue2=0;
float fRet;

printf("enter total marks:\n");
scanf("%d",&iValue1);
printf("enter marks obtained:\n");
scanf("%d",&iValue2);
fRet=Percentage(iValue1,iValue2);
printf("%f",fRet);
return 0;
}