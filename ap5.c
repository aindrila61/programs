#include<stdio.h>
unsigned int swapbits(unsigned int  x)
{
unsigned int even_bits=x&0xAAAAAAAA;
unsigned int odd_bits=x&0x555555555;
even_bits>>=1;
odd_bits<<=1;
return(even_bits|odd_bits);
}
int main()
{
unsigned int x=64;
printf("%u",swapbits(x));
return 0;
}
