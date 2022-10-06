#include<stdio.h>

int add(int , int );
int sub(int * , int * );
void main()

{
    int x=10,y=20;
    int d=add(x,y);
    int c=sub(&x,&y);
    printf("%d\n %d\n",d,c);
}
int add(int x, int y)
{

    int sum=x+y;

}

int sub(int *a, int *b)
{

    int s=*a-*b;
    //return s;
}
