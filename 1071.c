#include<stdio.h>
int main ()
{
   int i,x,y,sum = 0;
   scanf("%d %d",&x,&y);
   for(i=y+1;i<x;i++)
   {
       if(i%2!=0)
       {
          sum = sum+ i;
       }

   }
    printf("%d\n",sum);



    return 0;
}
