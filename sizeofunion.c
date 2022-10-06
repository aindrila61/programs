#include<stdio.h>
union lib
{
    char a;
    char b;
    int c;


};
void main()
{
     union lib u;
    printf("%d",sizeof(u));
}
