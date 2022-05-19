#include<stdio.h>

int main ()
{
    int a[15];
    int par[5],impar[5];
    int i,l,u=0,j,k=0,p=0,q=0,s=0;
    for(j=0; j<15; j++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0; j<15; j++)
    {



        if(l==5)
        {
            for(i=0; i<5; i++)
            {
                printf("impar[%d] = %d\n",i,impar[i]);
            }
            l=0;
        }
        if(u==5)
        {
            for(i=0; i<5; i++)
            {
                printf("par[%d] = %d\n",i,par[i]);
            }
            u=0;
        }
        if(a[j]%2!=0)
        {
            impar[k] = a[j];
            k++;
            l++;
            if(k==5)
                k=0;
        }
        if(a[j]%2==0)
        {
            par[s]= a[j];
            s++;
            u++;
            if(s==5)
                s=0;
        }
    }
    for(i=0;i<l;i++)
    {
       printf("impar[%d] = %d\n",i,impar[i]);
    }

for(i=0;i<u;i++)
{
    printf("par[%d] = %d\n",i,par[i]);
}



    return 0;
}
