#include<stdio.h>
void main()
{
int n,a,input;
printf("enter the number of bits to set");
scanf("%d",&n);
printf("enter the input value");
scanf("%d",&input);
a=(1<<n)|input;
printf("set value is :%d",&a);


}
