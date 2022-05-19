#include<stdio.h>



int main ()
{
    int i;
    char n[40];

    for(i=0; i<10; i++)
    {
        scanf("%s",&n);
        if(i==2 || i==6 || i==8)
        {
            printf("%s\n",n);
        }

    }










    return 0;
}
