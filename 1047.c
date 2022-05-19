#include<stdio.h>
int main()
{
   int a,b,c,d,x,quo,remi;
   scanf("%d%d%d%d",&a,&b,&c,&d);

    x = (c*60+d) - (a*60+b);
     quo = x/60;
     remi = x%60;
     if(remi<0)
     {
        remi = 60+ (d-c);

     }


 else if(a==c && b==d)
 {
     printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
 }

 else
 {
     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",quo,remi);
 }










    return 0;
}
