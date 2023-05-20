#include<conio.h>
#include<stdio.h>
int binarySearch(int a[],int beg,int end,int val)
{
    int mid ;
    if(end>=beg)
    {
        mid =(beg+end)/2;
        if(a[mid]==val)
        {
            return mid+1;

        }
    
        else if(a[mid]<val)
        {
            return binarySearch(a,mid+1,end,val);
 
        }
        else{
            return binarySearch(a,mid-1,end,val);
        }
    }
    return -1;
}
void main()
{
int a[]={98,34,43,45,76,78,75,32,54,44,23};
int val=98;
int n=sizeof(a)/sizeof a[0];
int res=binarySearch(a,0,n-1,val);
 printf("Total Elemenets in the Array:-");
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\n print the Searching Elements:-%d",val);
    if(res== -1)
    printf("\nnot avalilable index number in the Array");
    else
    printf("\navailable index number in the Array %d:",res);
     getch();

}