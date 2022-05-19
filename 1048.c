#include<stdio.h>
int main()
{
   float n,re,ps,p;
    scanf("%f",&n);

    if(n>=0.00 && n<=400.00)
    {
        re=(n*.15);
        ps=(n+re);

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15%%\n",ps,re);
    }
      else if(n>=400.01 && n<=800.00)
    {
        re=(n*.12);
        ps=(n+re);

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12%%\n",ps,re);
    }
       else if(n>=800.01 && n<=1200.00)
    {
        re=(n*.10);
        ps=(n+re);

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10%%\n",ps,re);
    }
      else if(n>=1200.01 && n<=2000.00)
    {
        re=(n*.07);
        ps=(n+re);

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7%%\n",ps,re);
    }
    else
    {
       re=(n*.04);
        ps=(n+re);

        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4%%\n",ps,re);
    }












    return 0;
}
