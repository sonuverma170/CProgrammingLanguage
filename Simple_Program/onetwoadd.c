#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,f=0;
    printf("enter the number");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        f=f*i;
        i=i+1;
    }
    printf("\n%d",i);
    getch();
}
