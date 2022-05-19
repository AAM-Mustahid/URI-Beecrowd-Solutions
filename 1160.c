#include<stdio.h>
int main ()
{
    int pa,pb,t,y,i;
    double g1,g2;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);

        y=0;
        while (pa<=pb)
        {
            pa*=(g1/100 + 1.0) ;
            pb*=(g2/100 + 1.0) ;
            y++;

            if(y>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(y<=100)
        {
            printf("%d anos.\n",y);
        }



    }



    return 0;
}
