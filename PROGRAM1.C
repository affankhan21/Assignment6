#include<stdio.h>
int main()
{
    char Name[30];
    printf("Enter name:\n");
    scanf("%[^\n]",&Name);
    printf("YOUR NAME IS %s",Name);
    return 0;
}