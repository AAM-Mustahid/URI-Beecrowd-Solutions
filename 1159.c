#include<stdio.h>
int main ()
{
    int i,b,sum,x;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
            break;
        else
        {
            sum =0;

           for(i=x,b=1;b<=5;i++)
           {

               if(i%2==0)
               {
                  sum+=i;
                  b++;
               }

           }
           printf("%d\n",sum);



        }



    }





    return 0;
}
