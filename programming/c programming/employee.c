#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("------ABC Pvt. Ltd.------\n");
    printf("Employee no. 1\n");
    printf("Enter the number of characters in your employee id : ");
    scanf("%d", &n);
    char *ptr;
    ptr = (char *)malloc(n * sizeof(char));
    printf("type your employee id:");
    scanf("%s", ptr);
    printf("your employee id is %s", ptr);
    free(ptr);
    printf("------ABC Pvt. Ltd.------\n");
    printf("Employee no. 2\n");
    printf("Enter the number of characters in your employee id : ");
    scanf("%d", &n);
    ptr = (char *)malloc(n * sizeof(char));
    printf("type your employee id:");
    scanf("%s", ptr);
    printf("your employee id is %s", ptr);
    free(ptr);
    printf("------ABC Pvt. Ltd.------\n");
    printf("Employee no. 3\n");
    printf("Enter the number of characters in your employee id : ");
    scanf("%d", &n);
    ptr = (char *)malloc(n * sizeof(char));
    printf("type your employee id:");
    scanf("%s", ptr);
    printf("your employee id is %s", ptr);

    return 0;
}