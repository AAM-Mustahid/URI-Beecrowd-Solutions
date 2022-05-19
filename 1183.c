#include <stdio.h>
int main()
{
    int l = 1, i, j;
    double sum = 0.0, m[12][12], avg;
    char ch[2];

    scanf("%s", &ch);
    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &m[i][j]);
        }
    }

   for(i=0;i<12;i++)
   {
       for(j=l;j<12;j++)
       {
           sum+=m[i][j];
       }
       l++;
   }

    if (ch[0] == 'S')
    {
        printf("%.1lf\n", sum);
    }
    else if (ch[0] == 'M')
    {
        avg = sum / 66.0;
        printf("%.1lf\n", avg);
    }

    return 0;
}
