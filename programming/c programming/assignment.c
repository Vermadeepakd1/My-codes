#include <stdio.h>
#include <math.h>
void main()
{
    int i = 0, n, j, a = 0, d,l;
    scanf("%d", &n);
    do
    {
        j = n / (pow(10, i));
        i++;
        a = a + 1;
    } while (j >= 1);
    a = a - 1;
    int b[a];
    int e[a];
    e[0] = n % 10;
    d = n / 10;
    for (j = 1; j <= a; j++)
    {
        b[j] = d % 10;
        e[j] = b[j];
        d = d / 10;
    }
    
    int g = 1;
    for (l = a - 1; l >= 0; l--)
    {g = 1;
        for (j = l-1; j >= 0; j--)
        {
            if (e[l] == e[j])

               {e[j]=10;
                   g = g + 1;}
        }
        if(e[l]!=10)
        {
        printf("%d %d\n", e[l], g);
        }
    }
}