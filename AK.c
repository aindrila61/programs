#include<stdio.h>
int main()
{
    int r=0x08;
    r&=~(1<<0);
    r&=~(1<<1);
    r&=~(1<<2);
    r&=~(1<<3);
    printf("0x%x",r);




}
