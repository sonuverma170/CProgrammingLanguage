#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5],i,s,p=0;
    for(i=0;i<=4;i++)
    {
        printf("enter the number:");
        scanf("%d",&a[i]);
    }
    printf("enter nu to serch:-----");
    scanf("%d",&s);
    for(i=0;i<=4;i++)
    {
        if(a[i]==s)
        p=i;
    }
    if(p<0)

    printf("\nvalue is not avalble:-----");
    else
    printf("\n value availble in %d position",p+1);

    getch();
}