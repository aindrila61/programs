#include<stdio.h>
  struct abc
    {
     int a;
    char b;
    };
    int main()
    {
       struct abc v;
        struct abc *ptr=&v;
        //scanf("%d %c",&ptr->a,&ptr->b);
        scanf("%d %c",&(*ptr).a,&`1(*ptr).b);
        printf("%d %c",ptr->a,ptr->b);

    }
