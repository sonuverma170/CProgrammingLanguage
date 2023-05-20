#include<stdio.h>
#define MAX 20
void main()
{
    int arr[MAX],i,j,k,temp,n,xchanges;
    printf("enter the numberof element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("unsorted list is :\n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
    /*bubble sort*/
    for(i=0;i<n-1;i++)
    {
        xchanges=0;
        for(j=0;j<n-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                xchanges++;
            }/*enter of if*/
        }/*end of inner for loop*/
        if(xchanges==0)/*if list is sorted*/
        break;
        printf("after pass %d elements are:",i+1);
        for(k=0;k<n;k++)
        printf("%d   ",arr[k]);
        printf("\n");

    }/*end of outer for loop*/

    printf("sorted list is:\n");
    for(i=0;i<n;i++)
    printf("%d     ",arr[i]);

    printf("\n");
    }/*end of main()*/
    
    
    