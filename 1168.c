#include<stdio.h>
int  main ()
{
    int n,led,i,j;
    char v[500];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",&v);// ekhane gets diye nile leds er calculation 0 ashe
        int len = strlen(v);
        led=0;


        for(j=0;j<len;j++)
        {
            if(v[j]=='0')
                led+=6;
            else if(v[j]=='1')
                led+=2;
                else if(v[j]=='2')
                led+=5;
                else if(v[j]=='3')
                led+=5;
                else if(v[j]=='4')
                led+=4;
                else if(v[j]=='5')
                led+=5;
                else if(v[j]=='6')
                led+=6;
                else if(v[j]=='7')
                led+=3;
                else if(v[j]=='8')
                led+=7;
                else if(v[j]=='9')
                led+=6;
        }
        printf("%d leds\n",led);





    }




    return 0;
}
