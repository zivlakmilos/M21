#include <stdio.h>

int obim(int a, int b)
{
    return 2 * a + 2 * b;
}

int povrsina(int a, int b)
{
    return a * b;
}

int main(void)
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Obim je:\t%d\n", obim(a, b));
    printf("Povrsina je :\t%d\n", povrsina(a, b));

    return 0;
}
