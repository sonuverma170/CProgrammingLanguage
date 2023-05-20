#include<stdio.h>
#include<conio.h>
struct stu
{
    char name[20];
    int age;
    char add[20];
};
struct mark
{
 int m1,m2,m3,t;
 struct stu b;
};
void main()
{
    struct mark a;
    
    printf("enter the name");
    scanf("%s",&a.b.name);
    printf("enter the age");
    scanf("%d",&a.b.age);
    printf("enter the add");
    scanf("%s",&a.b.add);
    printf("m1");
    scanf("%d",&a.m1);
    printf("m2");
    scanf("%d",&a.m2);
    printf("m3");
    scanf("%d",&a.m3);
    a.t=a.m1+a.m2+a.m3;
    printf("\n total%d",a.t);
    getch();
}


