#include<conio.h>
#include<stdio.h>
int binarySearch(int a[],int s,int c,int val)
{
    int mid;
    if(mid>=val)
    {
        mid=(s+c)/2;
        if(a[mid]==val)
        {
        return mid+1;
        }
        else if(a[mid]<val)
        {
        return binarySearch(a,c,mid+1,val);
        }
        else{
            return binarySearch(a,s,mid-1,val);
        }

        }
        return -1;
    }

int main()
{
    int a[]={23,34,45,56,67,78,89};
    int val=56;
    int n=sizeof(a)/sizeof a[0];
    int res=binarySearch(a,0,n-1,val);
    printf("Array 's Elements:-");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\nArray 's Index Number%d:-",val);
    if(res== -1)
    printf("\n not in Array");
    else
    printf("\n Availabale in %d Position is",res);
}
