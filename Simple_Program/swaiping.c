#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b=20;
    printf("enter first number");
    scanf("%d",&a);
    printf("enter second number");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value after swaping number");
    printf("value af a%d",a);
    printf("value af b",b);
    getch();
    

}