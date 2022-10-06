#include<stdio.h>
int main()
{
    int a[100],n,sum;
    printf("enter");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    int avg=sum/n;
    printf("%d",avg);
}
