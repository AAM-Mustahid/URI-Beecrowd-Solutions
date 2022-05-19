#include<stdio.h>
int main ()
{
    int x,y,i,total=0;
    scanf("%d%d",&x,&y);

    if(x>y)
    {   i=y;
        while(i<=x){

        if(i%13!=0)
        {
            total = total + i;a

        }
        i++;}
    printf("%d\n",total);

    }

        else if(x<y)
    {
        i=x;
        int total = 0;
        while(i<=y){

        if(i%13!=0)
        {
            total= total + i;

        }
        i++;}
    printf("%d\n",total);

    }



    return 0;
}

