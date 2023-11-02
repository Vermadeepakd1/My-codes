#include <stdio.h>

int main()
{

    FILE *ptr = NULL;
    char string[50] = "This is the new content";
    ptr = fopen("text.txt", "a");
    fprintf(ptr, "%s", string);

    /* ptr = fopen("text.txt", "r");
     fscanf(ptr, "%s", string);
     printf("The content inside the file is %s", string);
     */
    return 0;
}

/*#include <stdio.h>
// #include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[64] = "This content was produced by Tutorial64.c";

    // ****** Reading a file ******
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file has %s\n",string );

    // ****** Writing a file ******
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s", string);

    return 0;
}
*/