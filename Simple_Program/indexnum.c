#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,*p;
    for(i=a;i<=4;i++)
    {
        printf("enter the number");
        scanf("%d",&a[i]);
}
p=&a;
printf("\n%d",*p);
getch();
}
