#include<stdio.h>
int main ()
{
  int t,i;
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  { float x,y,result;
     scanf("%f%f",&x,&y);
     if(y==0)
        printf("divisao impossivel\n");
     else
     {
         result = x/y;
         printf("%.1f\n",result);
     }



  }



    return 0;
}
