#include<stdio.h>
int main ()
{
   int t,x,y,i,b,sum,j;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
      scanf("%d %d",&x,&y);

      for(j=x,b=0;b<y;j++)
      {
          if(j%2!=0)
          {
              sum+=j;
              b++;
          }

      }
      printf("%d\n",sum);
      sum=0;


   }





    return 0;
}
