#include<stdio.h>
int main ()
{
    int t,a,i,j,b,min,max,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        if(a==b)
        {
            min =a;
            max =b;


        }

        else if(a>b)
        {
            min = b;
            max = a;
            min++;
        }
        else
        {
            min =a;
            max=b;
            min++;
        }

        for(j=min;j<max;j++)
        {
            if(j%2!=0)
            {
                sum+=j;
            }


        }
        printf("%d\n",sum);
        sum =0;

    }




    return 0;
}
