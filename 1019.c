#include<stdio.h>
int main()
{
    int N,hour,minutes,seconds;
    scanf("%d",&N);
    hour = N/3600;
    minutes = (N%3600)/60;
    seconds = (N%3600)%60;
    printf("%d:%d:%d",hour,minutes,seconds);







    return 0;
}
