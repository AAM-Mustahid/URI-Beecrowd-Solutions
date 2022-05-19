#include<stdio.h>
int main()
{
    int a,b,c,d,x;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    // b = initial minute
    // d = final minute
    if(b>d)
    {
        x = (d+60)- b;
        if (a==c)
        {
            printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n",x);
        }
        else if (a>c)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(c+24)-a-1,x);
        }
        else if(a<c)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a-1,x);
        }
    }
     if(b<d){

        x = (d - b);

        if (a==c)
        {
            printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n",x);
        }
        else if (a>c)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(c+24)-a,x);
        }
        else if(a<c)
        {
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a,x);
        }
    }
     if(a==c && b==d){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }





    return 0;
}


