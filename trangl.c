#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
printf("enter the number");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
    for(j=1;j<=i;j++)
    {
        printf("%4d",j);
    }
        printf("\n");
}
        getch();
}





