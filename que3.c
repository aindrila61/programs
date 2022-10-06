#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the value for a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c&&a==c)
    {
        printf("0");
    }
    else if(a==b||b==c||a==c)
    {
        printf("2");
    }else if(a!=b||b!=c||a!=c)
    {
        printf("%d",a+b+c);
}

}
