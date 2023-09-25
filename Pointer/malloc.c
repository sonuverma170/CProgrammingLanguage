#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n;

    int *ptr;
    printf("enter the number of elements\n");
    scanf("%d",&n);
    ptr=(int*) malloc (sizeof(int)*n);
    /*if suffericieant memory is not allocatated*/
    if(ptr==NULL)
    {
        printf("insufficient memory\n");
        return ;
    }
    /*read nelements*/
    printf("enter%d elements\n",n);
    for (i=0;i<n;i++)
    scanf("%d",ptr+i);
    printf("the given elements are\n");
    for(i=0;i<n;i++)
    printf("%d",*(ptr+i));

getch();

}