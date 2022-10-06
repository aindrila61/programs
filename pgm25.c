#include<stdio.h>
char f(int n)
{
    if((n%20==18)||(n%20==19))
    {
        printf( "true");

    }
    else
    {
        printf ("false");
    }


}

int main()
{
    int a;
    printf("enter:");
    scanf("%c",&a);
    char x=f(a);
    printf("%c",x);

}



