#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char str[20];
    int i,j,l;
    printf("enter string");
    scanf("%s",&str);
    l=strlen(str);

    for(i=0;i<=l;i++)
{
        for(j=0;j<=i;j++)
        {
            printf("%c",str[j]);
        }
        printf("\n");
}
    getch();
}
