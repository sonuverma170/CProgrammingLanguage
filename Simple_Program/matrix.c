#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2],i,j;

for(i=0;i<=1;i++)
{
        for(j=0;j<=1;j++)
{
    printf("enter the number");
    scanf("%d",&a[i][j]);
}
}
for(i=0;i<=1;i++)
{
for(j=0;j<=1;j++)
{
    printf("%4d",a[i][j]);
}
printf("\n");
}
getch();
}







