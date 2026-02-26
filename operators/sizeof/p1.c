#include<stdio.h>
void main()
{
int i;
char ch;
float f;
double d;
printf("%lu %lu %lu\n",sizeof(int),sizeof(i),sizeof(-1000));
printf("%lu %lu %lu\n",sizeof(char),sizeof(ch),sizeof('a'));
printf("%lu %lu %lu\n",sizeof(float),sizeof(f),sizeof(1.33f));
printf("%lu %lu %lu\n",sizeof(double),sizeof(d),sizeof(5.2));
printf("%ld\n",sizeof("abcd.   .mnopq"));
}
