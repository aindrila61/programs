#include<stdio.h>
int main()
{
    char a[100];
    char *ptr;
    int flag=0,count=0;
    printf("enter: ");
    scanf("%s",&a);
    ptr=a;
    //while(*ptr!='\0')
    for(int i=0;a[i]!='\0';i++)
    {
        if(*ptr=='A'||*ptr=='E'||*ptr=='I'||*ptr=='O'||*ptr=='U'||*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
            flag++;
        else
            count++;
        ptr++;
    }
    printf("Vowels:%d\n consonants is:%d",flag,count);

}

