#include<stdio.h>
struct std
{
    int tm;
    float cgpa;
    char grade;
};
void main()
{
    struct std s[3];
    for(int i=0;i<3;i++)
    {
      printf("enter:");
      scanf("%d %f %c",&s[i].tm,&s[i].cgpa,&s[i].grade);

    }
    for(int i=0;i<3;i++)
    {
      printf("The ans: %d\n%.1f\n %c\n",s[i].tm,s[i].cgpa,s[i].grade);
    }
}
