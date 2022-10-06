#include<stdio.h>
int main()

{

    float *ptr,c;
    c=5.7;
    ptr=&c;
    //*ptr=1.23;
    printf("%f\n",*ptr);
    printf("%d\n",&ptr);
    printf("%d",&c);
}
