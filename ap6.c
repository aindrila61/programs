#include<stdio.h>
int main()
{

    int s,num[20];
    printf("enter the size of array:");
    scanf("%d",&s);
    printf("enter the numbers:");
    for(int i=0; i<=s; i++)
    {
        scanf("%d",&num[i]);
    }
    sort(s,num);

}


int sort(int s,int* ptr)
{

    int i,j,temp;
    for(i=0; i<=s; i++)
    {
        for(j=0; j<=s; j++)
        {
            if(*(ptr+i)<*(ptr+j))
            {
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
    for(i=0; i<=s; i++)
    {


        printf("%d",*(ptr+i));
    }
}
