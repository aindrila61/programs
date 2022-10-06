#include<stdio.h>
int round(int,int,int);
int main()
{
    int a,b,c,sum;
    printf("Enter the value for a,b,c:\n");
    scanf("%d%d%d",&a,&b,&c);
    round(a,b,c);
}
int round( int a,int b,int c)
{
    int sum,dif;
    sum=a+b+c;
    dif=sum%10;
    if(dif>=5)
    {
        int s;
        s=10-dif;
        sum=sum+s;
        printf("%d",sum);
    }else
    {

        sum=sum-dif;
        printf("%d",sum);
    }
    FILE *kp;
kp=fopen("C:/mm/rosh","a");
fprintf(kp,"%d",sum);
fclose(kp);
    }
