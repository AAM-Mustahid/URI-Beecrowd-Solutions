#include<stdio.h>
int main ()
{
  int t,i,j,sum,n;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
      scanf("%d",&n);
      sum = 0;
      for(j=1;j<n;j++)
      {
          if(n%j==0)
            sum+=j;

      }
      if(sum==n)
        printf("%d eh perfeito\n",n);
      else
        printf("%d nao eh perfeito\n",n);

  }



    return 0;
}
