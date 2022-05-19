#include<stdio.h>
int main ()
{
    double i,sum=0,a;
    for(i=1;i<=100;i++)
    {
        a=1/i;
        sum+=a;
    }
    printf("%.2lf\n",sum);



    return 0;
}
