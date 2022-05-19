#include<stdio.h>
int main ()
{
    int i,n,pro_id,quantity;
    float total = 0.00;
    scanf("%d",&n);
    for (i = 1 ; i<=n ; i++)
    {
        scanf("%d %d",&pro_id,&quantity);
        if (pro_id ==  1001)

            total += (1.50 * quantity) ;

        else if (pro_id ==  1002)
            total += 2.50 * quantity;
        else if (pro_id ==  1003)
            total += 3.50 * quantity;
        else if ( pro_id == 1004)
            total += 4.50 * quantity;
        else if (pro_id == 1005)
            total += 5.50 * quantity;






    }
    printf("%.2f\n",total);









    return 0;
}
