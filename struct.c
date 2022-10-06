#include<stdio.h>
    struct abc
    {
    char id[100];
    char name[70];
    int phn;
    float salary;
    };
    int main()
    {
        struct abc v1;``
        scanf("%s %s %d %f",&v1.id,&v1.name,&v1.phn,&v1.salary);
        printf("%s\n %s\n %d\n %.2f ",v1.id,v1.name,v1.phn,v1.salary);



    }


