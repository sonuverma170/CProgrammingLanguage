#include<stdio.h>
#define MAX 20
main()
{
    int arr[MAX],i,j,k,n,temp,smallest;
    printf("enter the number of element");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the element %d:",i+1);
        scanf("%d ",&arr[i]);
    }
    printf("unsorted list is:\n");
    for(i=0;i<n;i++)
    printf("%d ",arr[i]);
    printf("\n");
    /*selection sort*/
    for(i=0;i<n-1;i++)
    {
        /*find the smallestn element*/
        smallest=1;
        for(k=i;k<n;k++)
        {
            if(arr[smallest]>arr[k])
            smallest=k;
        }
        if(i!=smallest)
        {
            temp=arr[i];
            arr[i]=arr[smallest];
            arr[smallest]=temp;
        }
        printf("after pass %d element are:",i+1);
        for(j=0;j<n;j++)
        printf("%d ",arr[j]);
        printf("\n");
    }/*end of for*/
    printf("sorted list is :\n");
    for(i=0;i<n;i++)
    printf("%d  ",arr[i]);
    printf("\n");
}/*end of main()*/
        