#include<stdio.h>
int main ()
{
    double x;
    double a[100];
    scanf("%lf",&x);
    a[0]=x;
    int i;
    printf("N[0] = %.4lf\n",x);
    for(i=1;i<100;i++)
{
    a[i]= a[i-1]/2;
    printf("N[%d] = %.4lf\n",i,a[i]);
}

    return 0;
}
