#include<stdio.h>
#include<conio.h>
struct info
{
    char name[20];
    int age;
    char add[20];
};
void main()
{
    struct info k, *p
   {
    
    k.name="pushpesh";
    k.age="20";
    k.add="pbh";
    p=&k
    printf("name%s",*p.name);
    printf("age%d",*p.age);
    printf("add%s",*p.add);
    getch();
}

}