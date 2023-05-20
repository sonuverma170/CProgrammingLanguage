#include<conio.h>
#include<stdio.h>
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
 
int bubbleSort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
              if(a[i]>a[j])
              {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

              }
        }
    }
} 
void main(){

    int a[6]={23,12,34,11,55,33};
    int n=sizeof(a)/sizeof(a[0]);
    printf("\n Before Sorting array:-");
    print(a,n);
    bubbleSort(a,n);
    printf("\n After the sorting Array:-");
    print(a,n);
}