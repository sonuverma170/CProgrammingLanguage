#include<conio.h>
#include<stdio.h>
int leanerSearch(int a[],int n,int val)
{
    for(int i=0;i<n;i++)
    {
        if (a[i]==val)
        return i+1;
    }
    return -1;
}

int main()
{
    int a[]={46,34,23,65,35,56,34,98,87};
    int val=98; //searching element in the elements
    int n=sizeof(a)/sizeof a[0];
    int res=leanerSearch(a,n,val);
    printf("Total Elemenets in the Array:-");
    for(int i=0;i<n;i++)
    printf("%d  ",a[i]);
    printf("\n print the Searching Elements:-%d ",val);
    if(res== -1)
    printf("\nnot avalilable index number in the Array");
    else
    printf("\navailable index number in the Array %d:- ",res);
     getch();
}


