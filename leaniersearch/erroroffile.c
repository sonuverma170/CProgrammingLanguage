#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char ch, *filename;
    printf("\nenter the name of the file name:-");
    scanf("%s",filename);
    fp=fopen(filename,"erroroffile.c");
    if(fp==NULL);
    {
        printf("file opening error:-");
        exit(1);
    }
    ch=fgetc(fp);
    while(ch!=EOF)
    {
        putchar(ch);
        ch=fgetc(fp);
    }
    fclose(fp);
}