#include<stdio.h>
int main ()
{
    int n,i,amount,total =0,coel=0,raptos=0,sapos=0;
    char name;
    float per_coel,per_raptos,per_sapos;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {


      scanf("%d %c",&amount,&name);
      total+= amount;
      if(name =='C')
      {
        coel+=amount;

      }

      else if(name == 'R')
      {
          raptos+= amount;
      }

      else
      {
          sapos+=amount;

      }
       per_coel= ((float)coel/(float)total)*100.00;
      per_raptos= ((float)raptos/(float)total)*100.00;
       per_sapos= ((float)sapos/(float)total)*100.00;


    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",coel);
    printf("Total de ratos: %d\n",raptos);
    printf("Total de sapos: %d\n",sapos);
    printf("Percentual de coelhos: %.2f %%\n",per_coel);
    printf("Percentual de ratos: %.2f %%\n",per_raptos);
    printf("Percentual de sapos: %.2f %%\n",per_sapos);




    return 0;
}
