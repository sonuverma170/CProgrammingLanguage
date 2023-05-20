#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[max],i,j,k,n;
    printf("enter the  number of element:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("enter element%d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("unsorted list is:\n");
    for(i=0;i<=n;i++)
    printf("%d",arr[i]);
    printf("\n");
    /*insertion sort*/
    {
        k=arr[j];/*k is be insertion at proper place*/
        for(i=j-1;i>=0&&k<arr[i];i--)
        arr[i+1]=arr[i];
        arr[i+1]=k;
        printf("pass%d,element insertion in proper place:%d\n",j.k);
        for(i=0;i<n;i++)
        printf("%d",arr[i]);
        printf("\")
    }
    }

}