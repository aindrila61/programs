#include<stdio.h>
int main()
{
    int a[]={1,-2,4,5,6};
    int *p=&a[2];
    printf("%d\n",*p);
    p=p+2;
    printf("%d",*p);

}
