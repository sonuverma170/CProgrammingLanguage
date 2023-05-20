#include<conio.h>
int main(int argc, char const *argv[])
{
int arr[20]={12,34,45,56,76};
int i,n=5,x,pos;
printf("befor inserting data");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n ");

x=30;
pos=2;
n++;

for(i=n-1;i>=pos;i--)
arr[i]=arr[i-1];
arr[pos-1]=x;
printf("After insertion of \n");
for(i=0;i<n;i++)
printf("%d ",arr[i]);
printf("\n ");
    return 0;
}

