#include<stdio.h>
int main()
{
   int a,b,c,d,s,e;
   scanf("%d%d%d%d",&a,&b,&c,&d);

   s=a+b;
   e= c+d;
   if(b>c && d>a && e>s && c>0 && d>0 && (a%2==0) )
    printf("Valores aceitos\n");
   else
    printf("Valores nao aceitos\n");









    return 0;
}
