#include<stdio.h>
int main()
{
    int i,n;
    double count=0;
    double sum=0;
    while(1)
    {

        scanf("%d",&n);
        if(n>0)
        {
            sum+=n;
            count++;
        }
        else
            break;




    }
    double result = sum/count;
    printf("%.2lf\n",result);


    return 0;
}
