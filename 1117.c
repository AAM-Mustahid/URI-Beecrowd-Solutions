#include<stdio.h>
int main ()
{
    int count;
    float media,x,sum=0;
    while(1)
    {
        if(count ==2)
            break;
        scanf("%f",&x);
        if(x<0 || x>10)
            printf("nota invalida\n");


        else
        {
            sum+=x;
            count++;
        }









    }
    media = sum/(float)count;
    printf("media = %.2f\n",media);








    return 0;
}
