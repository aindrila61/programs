#include<stdio.h>
int main()
{
    char *s[]={"hey","hie","","hi"};
    for (int i=0;i<4;i++)
    {
        if(s[i]=="")
        {

            printf("position of empty string is %d\n",i);
            s[i]="SKUP";

        }
    }
    for(int i=0;i<4;i++)
    {
        printf("%s",s[i]);
    }

}
