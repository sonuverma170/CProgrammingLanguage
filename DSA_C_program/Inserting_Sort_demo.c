#include<stdio.h>
#include<conio.h>
void insert(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
    while(j>=0 && temp<=a[j])
    {
        a[j+1]=a[j];
        j=j-1;

    }
    a[j+1]=temp;
}
}
void printArr(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}

void main()
{
int a[]={23,12,43,13,54,71,17,15};
int n=sizeof(a)/sizeof(a[0]);
printf("\nBefore Sorting Array:-");
printArr(a,n);
insert(a,n);
printf("\n After the Sorting Array");
printArr(a,n);
getch();

}
 

