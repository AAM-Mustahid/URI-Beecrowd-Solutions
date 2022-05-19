#include<stdio.h>
int main ()
{
    float a,b,c,r;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {

        scanf("%f %f %f",&a,&b,&c);
        r = ((a*2 + b*3 + c*5)/(2+3+5));

        printf("%.1f\n",r);



    }






    return 0;
}
