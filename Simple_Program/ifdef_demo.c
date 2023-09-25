#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0;
    #ifdef NOINPUT
    a=2;
    #else
    printf("enter a:");
    scanf("%d",&a);
    #endif
    printf("value of a:%d\n",a);
    getch();

}
