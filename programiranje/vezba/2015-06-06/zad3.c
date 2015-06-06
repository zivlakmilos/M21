#include <stdio.h>

float din2eur(float din)
{
    return din / 100;
}

int main(void)
{
    float din;
    scanf("%f", &din);
    printf("%f\n", din2eur(din));
    return 0;
}
