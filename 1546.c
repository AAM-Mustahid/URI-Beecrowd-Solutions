#include<stdio.h>
int main ()
{
    int i,n,k,j,m;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&k);
        for(j=1; j<=k; j++)
        {

            scanf("%d",&m);
            switch(m)
            {
            case 1:
                printf("Rolien\n");
                break;
            case 2:
                printf("Naej\n");
                break;
            case 3:
                printf("Elehcim\n");
                break;
            case 4:
                printf("Odranoel\n");
                break;



            }
        }




    }

















    return 0;
}
