#include <stdio.h>
int reverse(int n)
{
    int reverse = 0, remainder;
    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }
    return reverse;
}
int palindrome(int n)
{
    if (reverse(n) == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    printf("This program will check if a number is palindrome or not\n");
    printf("Input a number : ");
    scanf("%d", &n);
    if (palindrome(n) == 1)
    {
        printf("This number is a palindrome\n");
    }
    else
    {
        printf("This number is not a palindrome\n");
    }
    return 0;
}