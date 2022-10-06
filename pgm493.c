#include<stdio.h>
int nos(int a,int b,int c)
{
    if(a-b==b-c||((a-b)==-(b-c))||a-c==c-b||((a-c)==-(c-b))||a-b==c-a||((a-b)==-(c-a)))
    {
        printf("true");
    }
    else
        printf("false");
}
 int main()
    {
        int a,b,c;
        printf("enter");
        scanf("%d %d %d",&a,&b,&c);
        printf("%s",nos(a,b,c));
        return 0;

    }
