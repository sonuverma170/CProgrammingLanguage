#include<stdio.h>
int main()
{
    int c,fst,lst,mid,n,search,arr[100];
    printf("enter number of element");
    scanf("%d",&n);
        printf("enter %d integersn",n);

    for(c=0;c<n;c++)
    scanf("%d",&arr[c]);
    printf("enter value to first");
    scanf("%d",&search);
    fst=0;
    lst=n-1;
    mid=(fst+lst)/2;
    while (fst<=lst)
    {
        if(arr[mid]<search)
        fst=mid+1;
        else if(arr[mid]==search)
        {
            printf("%dfound at location%d.n",search,mid+1);
            getch();
           }
}
}