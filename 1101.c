#include<stdio.h>
int main ()
{
    int m,n,sum=0,i,max=0,min=0;

  while(1){

    scanf("%d %d",&m,&n);
    if(m<=0 || n<=0)
        break;
    else
    {


    if(m>n)
    {
        max = m;
        min = n;
    }
    else
    {
        max = n;
        min = m;
    }





        for(i=min; i<=max; i++)
        {

            sum = sum +i;
            printf("%d ",i);
        }
         printf("Sum=%d\n",sum);
         sum = 0;

    }
  }




return 0;
}
