#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x==1)
    {
        float total= (y*4.00);
        printf("Total: R$ %.2f\n",total);
    }
    if(x==2)
    {
        float total= (y*4.50);
        printf("Total: R$ %.2f\n",total);
    }
    if(x==3)
    {
        float total= (y*5.00);
        printf("Total: R$ %.2f\n",total);
    }
    if(x==4)
    {
        float total= (y*2.00);
        printf("Total: R$ %.2f\n",total);
    }
    if(x==5)
    {
        float total= (y*1.50);
        printf("Total: R$ %.2f\n",total);
    }














    return 0;
}
