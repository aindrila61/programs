#include<stdio.h>
int sum(int a[])
{

if(a[0]==6)
    return "true";
else
    return "false";
}

int main()

{
    int a[70];
    scanf("%d",&a);
    int res=sum(a);
    printf("%s",res);





}
