#include<stdio.h>
#include<conio.h>
void main()

{
    int a[5],i;
    for(i=0;i<=4;i++);
    {
        printf("enter the number");
        scanf("%d",a[i]);
    }
    for(i=0;i<=4;i++)
    {
        if(a[i]%2==0)
        
        printf("\n %d",a[i]);
    }
    getch();
}