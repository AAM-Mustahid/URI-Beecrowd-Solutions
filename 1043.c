#include<stdio.h>
int main()
{
    float a,b,c,Perimetro,Area;
    scanf("%f%f%f",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    {

        Perimetro = a+b+c;
        printf("Perimetro = %.1f\n",Perimetro);
    }
    else
    {
        Area = (.5*(a+b)*c);
        printf("Area = %.1f\n",Area);

    }










    return 0;
}
