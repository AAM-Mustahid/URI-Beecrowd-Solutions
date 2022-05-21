#include <stdio.h>
int main()
{
    double n;
    scanf("%lf", &n);
    int notes, paisa;
    notes = n;
    paisa = (n - notes) * 100;

    if ((paisa * 1000) % 10 == 9)
    {
        paisa++;
    }
    int t1 = notes / 100;
    notes = notes % 100;
    int t2 = notes / 50;
    notes = notes % 50;
    int t3 = notes / 20;
    notes = notes % 20;
    int t4 = notes / 10;
    notes = notes % 10;
    int t5 = notes / 5;
    notes = notes % 5;
    int t6 = notes / 2;
    notes = notes % 2;

    int p1 = notes / 1;
    notes = notes % 1;
    int p2 = paisa / 50;
    paisa = paisa % 50;
    int p3 = paisa / 25;
    paisa = paisa % 25;
    int p4 = paisa / 10;
    paisa = paisa % 10;
    int p5 = paisa / 5;
    paisa = paisa % 5;
    int p6 = paisa / 1;
    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n", t1);
    printf("%d nota(s) de R$ 50.00\n", t2);
    printf("%d nota(s) de R$ 20.00\n", t3);
    printf("%d nota(s) de R$ 10.00\n", t4);
    printf("%d nota(s) de R$ 5.00\n", t5);
    printf("%d nota(s) de R$ 2.00\n", t6);

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", p1);
    printf("%d moeda(s) de R$ 0.50\n", p2);
    printf("%d moeda(s) de R$ 0.25\n", p3);
    printf("%d moeda(s) de R$ 0.10\n", p4);
    printf("%d moeda(s) de R$ 0.05\n", p5);
    printf("%d moeda(s) de R$ 0.01\n", p6);

    return 0;
}
