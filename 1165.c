#include<stdio.h>
int main ()
{
    int t,n,i,j,count;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        count = 0;
        for(j=1;j<=n;j++)
        {
          if(n%j==0)
          {
              count++;
          }
        }
        if(count == 2)
            printf("%d eh primo\n",n);
        else
            printf("%d nao eh primo\n",n);

    }



    return 0;
}
