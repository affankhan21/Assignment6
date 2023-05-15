#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define   FALSE 0

 BOOL CheckGreater(int iNo)
{


    if(iNo>=100)
    {


        return 1;
    }

    else

    {

        return 0;
    }




}










int main()
{
int iValue=0;
BOOL bRet=FALSE;
printf("plesse enter a number:\n");
scanf("%d",&iValue);
bRet=CheckGreater(iValue);
if(bRet==1)
{

   
printf("%d is greater  than or equal to  100",iValue);
}
else
{

printf("%d is smaller  than  100",iValue);
}





    return 0;
}