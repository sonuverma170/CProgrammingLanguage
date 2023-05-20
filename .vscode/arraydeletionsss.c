#include<conio.h>
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[]={12,23,34,45,45,67};
    int k=45,n=6;
    int i,j;
    printf("befor deletion of number:=");
    for(i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
        
       
    }
    j=k;
    while (j<n)
    {
    arr[j-1]=arr[j];
    j=j+1;
    }
    n=n-1;
    printf("After deletion numberr:=");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
      
    }
    
    return 0;
}
