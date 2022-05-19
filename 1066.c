#include<stdio.h>
int main ()
{
    int i,e=0,o=0,p=0,ne=0,n;
    for(i=0;i<5;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            e++;
        }
         if(n%2!=0)
            o++;
         if(n>0)
            p++;
         if(n<0)
            ne++;
    }
    printf("%d valor(es) par(es)\n",e);
    printf("%d valor(es) impar(es)\n",o);
    printf("%d valor(es) positivo(s)\n",p);
    printf("%d valor(es) negativo(s)\n",ne);




    return 0;
}
