#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char ch;
    fp=fopen("test.c","r");
    ch=getc(fp);
    while(ch!=EOF)
    {
        putchar(ch);
        ch=getc(fp);
    }
    fclose(fp);
}