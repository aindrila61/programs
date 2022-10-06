int clearbit(unsigned int a2,unsigned int p)
{
    int a1;
    if(a1=0x07)
        return(a2&(~(1<<p)));


}
int main()
{
    unsigned int a2=0xFF;
    unsigned int p=(1);
    for(int i=0;i<4;i++)
    {

    a2=clearbit(a2,p);
    printf("%u=0x%x\n",p,a2);
    return 0;
    }

}
