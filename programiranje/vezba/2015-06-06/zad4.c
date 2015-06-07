#include <stdio.h>

int najveca(int broj)
{
    int i;
    int a, d = 100000;
    int rez;
    a = broj / d;
    rez = a;
    for(i = 0; i < 5; i++)
    {
        broj = broj - a * d;
        d /= 10;
        a = broj / d;
        if(a > rez)
            rez = a;
    }

    return rez;
}

int main(void)
{
    int a, b;

    scanf("%d", &a);
    b = najveca(a);

    printf("%d\n", b);

    return 0;
}
