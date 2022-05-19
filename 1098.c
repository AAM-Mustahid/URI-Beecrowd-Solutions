#include <stdio.h>
int main()
{
    double a,b,c=1,d=3,e,f;
    int x;
    for(a=0; a<=1.9; a=a+.2)
    {
        for(b=1.0; b<=3.0; b++)
        {
            e=b+a;
            if(a==0.0||a==1.0) printf("I=%.0lf J=%.0lf",a,e);
            else if(e==3.0||e==4.0||e==5.0) printf("I=%.0lf J=%.0lf",a,e);
            else printf("I=%.1lf J=%.1lf",a,e);
            printf("\n");
        }
    }
    for(x=3; x<=5; x++) printf("I=2 J=%d\n",x);
    return 0;
}


















/*#include<stdio.h>
int main ()
{
    int i,j;
    for(i=0,j=1;j<=3;j++)
    {
        printf("I=%d J=%d\n",i,j);
    }
    float a=i;
    float b=j;
    for(a=0.2;a<=2;a+=.2)
    {
        for(b=1.2;a<=2;b+=1.2)
        printf("I=%.1f J=%.1f\n",a,b);
    }









    return 0;
}*/
