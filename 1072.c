#include<stdio.h>
int  main ()
{
  int n,i,x,c_in = 0, c_out=0;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      scanf("%d",&x);
      if(x>=10 && x<=20)
      {
          c_in++;
      }
      else
      {
          c_out++;
      }
  }
  printf("%d in\n",c_in);
  printf("%d out\n",c_out);








    return 0;
}
