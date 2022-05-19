#include<stdio.h>
int main ()
{
    int i,j,n,k=7;
    for(i=1;i<=9;i+=2)
    {

       for(j=k,n=0;n<3;n++)
       {
           printf("I=%d J=%d\n",i,j);
           j--;
       }
       k=k+2;



    }














    return  0;
}
