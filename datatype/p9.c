#include<stdio.h>
void main()
{
int x=-513;
unsigned char a=x;
char b=a;
short s=b;
unsigned short us=s;
int y=us-300;
printf("1:%d\n",a);
printf("2:%d\n",b);
printf("3:%hd\n",s);
printf("4:%hu\n",us);
printf("5:%d\n",y);
printf("6:%x\n",y);
if (b<us)
printf("7:TRUE\n");
else
printf("7:FALSE\n");
}
