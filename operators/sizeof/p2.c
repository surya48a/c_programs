#include<stdio.h>
void main()
{
int i=2,j=33;
double k;
printf("%lu\n",sizeof(i+j));
printf("%lu\n",sizeof(k=i+j));
printf("%lu\n",sizeof(k+i));
}

