#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c;

    float delta, raizPos, raizNeg;

    scanf("%d %d %d", &a, &b, &c);

    delta = (float) sqrt((b*b)-(4*a*c));

    raizPos = (-b+delta)/(2*a);
    raizNeg = (-b-delta)/(2*a);

    printf("%0.4lf %0.4lf\n", raizPos, raizNeg);

    return 0;
}