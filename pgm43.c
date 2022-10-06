#include<stdio.h>
int find_si()
{

    int s,p,r,t;
    scanf("%d %d %d" ,&p,&r,&t);
    s = p*r*t/100;
    return s;
}
int main()
{




    printf("%d",find_si());
}
