#include<stdio.h>
int round(float,float,float);
int main()
{
    float a,b,c,fsum;
    int sum;
    printf("Enter the value for a,b,c:\n");
    scanf("%f%f%f",&a,&b,&c);
    round(a,b,c);
}
int round(float a,float b,float c)
{
    int sum;
    float s;
    float fsum=0;
    fsum=a+b+c;
    sum=a+b+c;
    s=fsum-sum;
    if(s>=.5)
    {
        float s1=1-s;
        fsum=fsum+s1;
        printf("%.f",fsum);
    }else
    {
        printf("%d",sum);
    }
    }
//    printf("%.1f\n",fsum);
//    printf("%d",sum);
