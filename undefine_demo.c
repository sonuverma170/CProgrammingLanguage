#include<stdio.h>
#define num 12
float a= num*num;
#undef num
void main()
{
printf("%f",a);
    
}