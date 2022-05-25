#include<stdio.h>
int main()
{
   int n,q,w,e,r,t,y,u;
   scanf("%d",&n);
   printf("%d\n",n);
   q=n/100;
   w= (n%100);
   e= (w%50);
   r= (e%20);
   t= (r%10);
   y= (t%5);
   u= (y%2);

   printf("%d nota(s) de R$ 100,00\n",q);
   printf("%d nota(s) de R$ 50,00\n",w/50);
   printf("%d nota(s) de R$ 20,00\n",e/20);
   printf("%d nota(s) de R$ 10,00\n",r/10);
   printf("%d nota(s) de R$ 5,00\n",t/5);
   printf("%d nota(s) de R$ 2,00\n",y/2);
   printf("%d nota(s) de R$ 1,00\n",u/1);









return 0;
}
