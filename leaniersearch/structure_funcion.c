#include<stdio.h>
#include<conio.h>
struct stu
{
    char name[20];
    int age;
    char add[20];
};
 void info ( struct stu k)
{

    printf("name:---%s",k.name);
    printf("age:--%d",k.age);
    printf("add:--%s",k.add);
}
void main()
{
    struct stu r;
    printf("name:--");
    scanf("%s",&r.name);
    printf("age:--");
    scanf("%d",&r.age);
    printf("add:--");
    scanf("%s",&r.add);
    info(r);
    getch();
}
