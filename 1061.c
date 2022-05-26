#include <stdio.h>
int main()
{
    int st_day1, st_day2, hour1, hour2, minute1, minute2, second1, second2;

    scanf("Dia %d", &st_day1);
    scanf("%d : %d : %d\n", &hour1, &minute1, &second1);

    scanf("Dia %d", &st_day2);
    scanf("%d : %d : %d", &hour2, &minute2, &second2);

    int second = second2 - second1;
    int minute = minute2 - minute1;
    int hour = hour2 - hour1;
    int days = st_day2 - st_day1;
    if (second < 0)
    {
        second += 60;
        minute--;
    }
    if (minute < 0)
    {
        minute += 60;
        hour--;
    }
    if (hour < 0)
    {
        hour += 24;
        days--;
    }

    printf("%d dia(s)\n", days);
    printf("%d hora(s)\n", hour);
    printf("%d minuto(s)\n", minute);

    printf("%d segundo(s)\n", second);

    return 0;
}