#include<stdio.h>
void main()
{
int i,size;
printf("enter the array size");

scanf("%d",&size);
printf("enter the array elements");
int a[size];
for(i=0;i<=size;i++)
    scanf("%d",a[size]);
printf("array elements are:%d",a[size]);
for(i=0;i<=size-1;i--)
{
    printf("after sorting",a[size],i);
}
}
