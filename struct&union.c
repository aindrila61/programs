#include<stdio.h>
union lib
{
     char a[100];
    char b[100];
    float c;


};
struct libi
{
     char a[100];
    char b[100];
    float c;

};
void main()
{
     struct libi s[3];
    for(int i=0;i<3;i++)
    {
      printf("enter name book:");
      scanf("%s",&s[i].a);
      printf("enter name of the author:");
      scanf("%s",&s[i].b);
       printf("enter  the price:");
      scanf("%f",&s[i].c);

    }
    printf("---------------\n");
    for(int i=0;i<3;i++)
    {
    printf("The book is:%s\n",s[i].a);

    printf("The author is:%s\n",s[i].b);

    printf("The price is:%.2f\n%",s[i].c);
    }

     union lib u[3];
    for(int i=0;i<3;i++)
    {
      printf("enter name book:");
      scanf("%s",&u[i].a);
      printf("enter name of the author:");
      scanf("%s",&u[i].b);
       printf("enter  the price:");
      scanf("%f",&u[i].c);

    }
    printf("---------------\n");
    for(int i=0;i<3;i++)
    {
    printf("The book is:%s\n",u[i].a);

    printf("The author is:%s\n",u[i].b);

    printf("The price is:%.2f\n%",u[i].c);

    }


}
