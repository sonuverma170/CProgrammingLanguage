#include<stdio.h>
#define MAX 20
main()
{
    int arr[MAX],i,j,k,n;
    printf("enter teh number of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("unsorted list is:\n");
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
    printf("\n");
    /*insertion sort*/
    for(j=1;j<n;j++)
    {
        k=arr[j];/*k is to be inserted at proper place*/
        for(i=j-1;i>=0 && k<arr[i];i--)
        arr[i+1]=arr[i];
        arr[i+1]=k;
        printf("pass %d element inserted in proper place:%d\n",j,k);
        for(i=0;i<n;i++)
        printf("%d",arr[i]);
        printf("\n");
        }
        printf("sorted list is :\n");
        for(i=0;i<n;i++)
        printf("%d",arr[i]);
        printf("\n");
}/*end of main()*/
