#include<stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a+b>c && b+c>a && a+c>b)
    {
        if(a==b && b==c && a==c)
        {
            printf("Valido-Equilatero\n");
        }
        else if(a!=b && b!=c && a!=c)
        {
            printf("Valido-Escaleno\n");

        }
        else if(a==b || b==c || a==c)
        {
            printf("Valido-Isoceles\n");
        }
        if(a*a == b*b +c*c || b*b== a*a +c*c || c*c== a*a +b*b)
        {
            printf("Retangulo: S\n");
        }
        else
        {
            printf("Retangulo: N\n");
        }

}
else
{
    printf("Invalido\n");
}






    return 0;
}
