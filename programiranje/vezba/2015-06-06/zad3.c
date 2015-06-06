#include <stdio.h>

#define VALUTA      100

float din2eur(float din);

int main(void)
{
    float din;
    scanf("%f", &din);
    printf("%f\n", din2eur(din));
    return 0;
}

float din2eur(float din)
{
    return din / VALUTA;
}
