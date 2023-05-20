#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],i,mx;
    for(i=0;i<=4;i++)
    {
        printf("enter the number");
        scanf("%d",&a[i]);
    }
    mx=a[0];
    for(i=0;i<=4;i++)
    {
        if(a[i]>mx)
        mx=a[i];
    }
    printf("%d", mx);
    getch();
}