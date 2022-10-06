
    #include<stdio.h>
int main()

{
    int a=10;
    int *ptr=&a;
    int **p=&ptr;
    printf("%d\n %d\n %d\n" ,a,**p,*ptr);
}


