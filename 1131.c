//Bismillahir Rahmanir Rahim
#include <stdio.h>
int main()
{
    int inter_goal, gremio_goal, want = 1, iw = 0, gw = 0, draw = 0, stats = 0;
    while (want == 1)
    {
        scanf("%d%d", &inter_goal, &gremio_goal);
        if (inter_goal > gremio_goal)
            iw++;
        if (gremio_goal > inter_goal)
            gw++;
        if (inter_goal == gremio_goal)
            draw++;
        stats++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &want);
        if (want == 2)
            break;
    }
    printf("%d grenais\n", stats);
    printf("Inter:%d\n", iw);
    printf("Gremio:%d\n", gw);
    printf("Empates:%d\n", draw);
    if (iw > gw)
        printf("Inter venceu mais\n");
    else if (iw < gw)
        printf("Gremio venceu mais\n");
    else
        printf("Não houve vencedor\n");

    return 0;
}
