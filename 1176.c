#include<stdio.h>
int main ()
{
  long long int n[70];
  int i;
  n[0]=0;
  n[1]=1;
  for(i=2;i<70;i++)
  {
      n[i] = n[i-1]+ n[i-2];
  }
  int t,f;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
      scanf("%d",&f);
      printf("Fib(%d) = %lld\n",f,n[f]);

  }
  return 0;





}
