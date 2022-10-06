#include<stdio.h>
int main()
{
    int r=0xF3 ,k=7;
    r=r|(1<<k-0);
    r=r|(1<<k-4);
    printf("0x%x",r);
}
