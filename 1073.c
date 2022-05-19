#include<stdio.h>
int main ()
{
  int i,n,result;
  scanf("%d",&n);

  for(i=1;i<=n;i++)
  {
      if(i%2==0)
      {
          result = i*i;
          printf("%d^2 = %d\n",i,result);
      }
  }



    return 0;
}
