#include<stdio.h>
#include<conio.h>
void main()
{
int *p;
int a;
a=5;
p=&a;
printf("%d",*p);
printf("%u",p);
printf("%u",&p);
getch();
}