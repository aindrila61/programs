#include<stdio.h>
int* fact(int n)
{
   int i,f=1;
   for(i=1;i<=n;i++)
   {
       f=f*i;
   }
   return f;
}


int main()
{
    int *p;
    int n;
    scanf("%d",&n);
    p=fact(n);
    printf("%d",*p);
}


