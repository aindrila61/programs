int main()
{
    int n,i;
    printf("enter n");
    scanf("%d",&n);
    int a[n];
    int len=(sizeof(a)/sizeof(a[0]));
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("size is %d",len);



}

