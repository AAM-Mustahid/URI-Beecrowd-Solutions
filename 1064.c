#include<stdio.h>
int main ()
{
    float a[6],avg,sum = 0;
    int i, count=0;
    for(i=0;i<6;i++)
    {
        scanf("%f",&a[i]);


    }
    for(i=0;i<6;i++)
    {
        if(a[i]>0)
        {
            count++;
            sum+=a[i];
        }
    }
    avg = sum/count;

    printf("%d valores positivos\n",count);
    printf("%.1f\n",avg);





    return 0;
}
