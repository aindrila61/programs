#include<stdio.h>
int * display(char s[]);
int main()
{
    int *p;
    char s[20];
    printf("enter a string");
    scanf("%s",&s);
    p=display(s);
    printf("%s",p);

}
int * display(char s[])
{
    s=strupr(s);
    return s;
}
