#include <stdio.h>
#include <math.h>

int main()
{
    printf("This program will find the roots of a quadratic equation when you enter its coefficents\n");
    int a, b, c;
    float D, A, B;
    printf("Enter a,b,c : ");
    scanf("%d%d%d", &a, &b, &c);
    D = b * b - 4 * a * c;
    (D >= 0) ? printf("%f, %f", -b + pow(D, 1 / 2) / (2 * a), -b - pow(D, 1 / 2) / (2 * a)) : printf("Roots are imaginary");

    return 0;
}