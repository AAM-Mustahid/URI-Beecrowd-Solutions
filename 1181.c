#include<stdio.h>
int main ()
{
    int l,i,j;
    double sum = 0.0,m[12][12],avg;
    char ch[2];
    scanf("%d",&l); //input lines
    scanf("%s",&ch);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&m[i][j]);
            if(i==l)
            {
                sum+=m[i][j];
            }

        }


    }
    if(ch[0]=='S')
    {
        printf("%.1lf\n",sum);
    }
    else if(ch[0]=='M')
    {
       avg = sum/12.0;
       printf("%.1lf\n",avg);

    }





    return 0;
}