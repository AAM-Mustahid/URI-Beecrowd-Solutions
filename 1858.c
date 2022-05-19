#include<stdio.h>
int main ()
{
    int i,n,u=1;
    scanf("%d",&n);
    int p[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&p[i]);
    }
    int t = p[0];
    for(i=0; i<n; i++)
    {
        if(t>p[i])
        {
            t=p[i];
            u = i+1;
        }

    }


    printf("%d\n",u);


    return 0;
}
