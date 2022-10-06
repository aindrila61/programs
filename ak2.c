#include<stdio.h>
int main()
{
    int r=0x06;
    r=r|(1<<3);
    r=r|(1<<6);
    r=r|(1<<7);
    printf("0x%x",r);
}
