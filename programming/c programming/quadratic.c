#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    float D, A, B;
    printf("Enter the value of a, b, c");
    scanf("%d%d%d", &a, &b, &c);
    D = b * b - 4 * a * c;
    switch (D >= 0)
    {
    case 1:
        A = -b + sqrt(D) / 2 * a;
        B = -b - sqrt(D) / 2 * a;
        printf("The roots are %.2f, %.2f", A, B);
        break;
    case 0:
        break;
    }
    switch (D < 0)
    {
    case 1:
        printf("The roots are imaginary");
    case 0:
        break;
    }

    return 0;
}