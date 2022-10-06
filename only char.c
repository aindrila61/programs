#include<stdio.h>
int main()
{
    int i,a=0;
    char s[30];
    printf("enter the string:");
    gets(s);
    while(s[i]!=0)
   {
    if(s[i]>='a'&& s[i]<='z'||s[i]>='A'&&s[i]<='Z')
    {
        a++;
    }
    printf("length:%d",a);
}
}
