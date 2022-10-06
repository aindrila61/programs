#include<stdio.h>
int main()
{
    char s[10];
    scanf("%s",&s);
    int i;
    for(i=0;s[i]!=NULL;i++)

    {
        //if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
        //count++;
        if(!((s[i]>=48 && s[i]<=57)||(s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')))
            printf("%c\n",s[i]);


    }

        //else if((s[i]>=48 && s[i]<=57)||(s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
             //count++;


    //printf("%d",count);

}
