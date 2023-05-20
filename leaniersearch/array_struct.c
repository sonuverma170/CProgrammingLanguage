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
    struct  stu b;
};
void main()
{
    struct mark a[7];
    int i;

        for(i=0;i<=6;i++)
        

        printf("enter the name");
        scanf("%s",&a[i].b.name);
        printf("enter the age");
        scanf("%d",&a[i].b.age);
        printf("enter the add");
        scanf("%s",&a[i].b.add);
        printf("m1");
        scanf("%d",&a[i].m1);
        printf("m2");
        scanf("%d",&a[i].m2);
        printf("m3");
        scanf("%d",a[i].m3);
        printf("print the total");
        a[i].t=a[i].m1+a[i].m2+a[i].m3;
        printf("total",a[i].t);
        getch();
    }

