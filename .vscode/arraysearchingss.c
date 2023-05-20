#include<conio.h>
int main(int argc, char const *argv[])
{
    int arr[]={23,34,45,56,67};
    int item=45,j=0,i;
    printf("befor searching Elements:-");
    for ( i=0;i<5;i++)
    {
    printf("%d ",arr[i]);
    }
    printf("searching of this elm in arry%d ",item);

    while (j<5)
    {
    if(arr[j]==item){
    break;
    }
    j=j+1;
    }
    printf("after searching Elm%d and  postion is%d",item,j+1);
    
    
    return 0;
}
