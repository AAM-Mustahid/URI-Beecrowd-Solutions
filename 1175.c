#include<stdio.h>
int main ()
{
    int a[20],b[20];
    int i,j;
    for(i=0; i<20; i++)
    {
        scanf("%d",&a[i]);


    }
    for(i=19,j=0; i>=0; i--,j++)
    {

        b[j]=a[i];
    }
    for(i=0; i<20; i++)
    {
        printf("N[%d] = %d\n",i,b[i]);


    }


    return 0;
}
