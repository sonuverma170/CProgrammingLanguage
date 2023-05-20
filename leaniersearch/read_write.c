#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    fp=fopen("matrix.c","w");
    fputs("hello sonu verma",fp);
    fclose(fp);
    char text[300];     
    fp=fopen("my file.txt","w");
    printf("duto form the file%s",fgets(text,200,fp));
    fclose(fp);
}