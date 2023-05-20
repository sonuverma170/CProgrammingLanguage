#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[]={12,23,34,45,56,77};
    int item=50,i,pos=5;
    printf("print Before updation No:-");
    for ( i = 0; i < 6; i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
    arr[pos-1]=item;
    printf("After updation of number:-");
    for ( i = 0; i < 6; i++)
    {
    printf("%d ",arr[i]);
    }
    
    

    return 0;
}
