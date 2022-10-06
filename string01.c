#include<stdio.h>
#include<string.h>
void main()
{
    char ch1[]="hello world";
    char ch2[]="Omkar Amle";

    printf("%d\n",strlen(ch1));
    puts(ch1);
    printf("%d\n",strcmp(ch1,ch2));
    strcpy(ch1,ch2);
    puts(ch1);
    strcat(ch1,ch2);
    puts(ch1);
    strlwr(ch1);
    puts(ch1);
    strupr(ch1);
    puts(ch1);
    strstr(ch1,ch2);
    puts(ch1);

}
