#include<stdio.h>
int main ()
{
    long long int  X,M,E ;
    int  i;
   while(1)
    {
       scanf("%lld %lld",&X,&M);
       if(X==0 && M==0)
       break;
       else
       {
           E = X * M;
           printf("%lld\n",E);
       }



    }






    return 0;
}
