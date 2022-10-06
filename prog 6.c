struct abc
{
    char name[50];
    int age;
};
int main()
{
    struct abc v1;
    printf("enter name");
    scanf("%s",&v1.name);
    printf("enter a age");
    scanf("%d",&v1.age);
    student(v1);
}
int student(struct abc v)
{
    printf("name is %s\n",v.name);
    printf("age is %d\n",v.age);
}
