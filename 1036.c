#include<stdio.h>
int main()
{
    float a,b,c,x,x1,y1;
    scanf("%f%f%f",&a,&b,&c);
    x= (b*b)-(4*a*c);
    if(a==0 || x<0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        x1= (-b+ sqrt(x))/ (a+a);
        y1= (-b- sqrt(x))/ (a+a);
        printf("R1 = %.5f\n",x1);
        printf("R2 = %.5f\n",y1);

    }


return 0;
}
