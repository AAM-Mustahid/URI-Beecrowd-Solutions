#include<stdio.h>
int main ()
{
    int n,i,a=0,b=0,c=0,d=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            a++;
         if(arr[i]%3==0)
            b++;
             if(arr[i]%4==0)
            c++;
             if(arr[i]%5==0)
            d++;
    }
    printf("%d Multiplo(s) de 2\n",a);
    printf("%d Multiplo(s) de 3\n",b);
    printf("%d Multiplo(s) de 4\n",c);
    printf("%d Multiplo(s) de 5\n",d);


    return 0;
}
