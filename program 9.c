#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the elements for a,b and c");
scanf("%d %d %d",&a,&b,&c);
if(a==b||a==c||b==c)
{
    printf("common");
}
else
    {
    printf("not");
    }
}
