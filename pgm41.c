#include<stdio.h>
int find_si(int p,int r,int t)
{

    int s;
    s = p*r*t/100;
    return s;
}
int main()
{

    int p,r,t;
    printf("enter");
    scanf("%d %d %d",&p,&r,&t);
    printf("%d",find_si(p,r,t));
}
