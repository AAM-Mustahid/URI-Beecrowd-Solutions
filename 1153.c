#include<stdio.h>
int main ()
{
    int i,n,result =1;

scanf("%d",&n);
for(i=n;i>=1;i--)
{
     result*= i;


}
printf("%d\n",result);

return 0;
}
