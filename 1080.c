#include<stdio.h>
int main ()
{
    int n;
   int i,max =0,p = 0;
   for (i = 1; i<= 100; i++)
   {
       scanf("%d",&n);
       if(max<n)
       {
           max = n;
           p = i;
       }
   }
       printf("%d\n",max);
       printf("%d\n",p);








    return 0;
}
