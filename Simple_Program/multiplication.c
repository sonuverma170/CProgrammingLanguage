#include<stdio.h>
#include<conio.h>
    void main()
    {
        int a[5],i,m;
        for(i=0;i<=5;i++)
        {
            printf("enter the number");
            scanf("%d",&a[i]);
        }
        for(i=0;i<=5;i++)

        {
            if(a[i]%2!=0)
            {
            m= m*a[i];
        }
        printf("/n%d",m);
        }
    
    getch();
}