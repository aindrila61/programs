#include<stdio.h>
int main()
{
    char a='R';
    char *ptr =&a;
    char **p=&ptr;
     char ***p1=&p;


    printf("%c\n",p1);

}
