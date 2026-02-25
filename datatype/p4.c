#include<stdio.h>
void main()
{
int x=0xFFFFFF7A;
short s=x;
unsigned char c=s;
printf("%hx\n",s);
printf("%x\n",c);
printf("%d\n",c);
}
