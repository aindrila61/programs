#include<stdio.h>
int main()
{

    int a=10;
    int *p=&a;
    //int *q=&b;
    //p=p+2*sizeof(4);

    printf("%d ",p);
    p=p+2;
    printf("%d ",p);

}
