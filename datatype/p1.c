#include<stdio.h>
void main()
{
int x=-1025;
unsigned char a=x;
signed char b=a;
unsigned int c=b;
printf("%d\n",a);
printf("%d\n",b);
printf("%u\n",c);
printf("%x\n",c);
}
