#include<stdio.h>
void find_si(int p,int r,int t)
{

    int s;
    s = p*r*t/100;
    printf("%d",s);
}
int main()
{

    int p,r,t;
    printf("enter");
    scanf("%d %d %d",&p,&r,&t);
    find_si(p,r,t);
}
