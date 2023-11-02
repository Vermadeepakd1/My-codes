#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int RandomGenerator(int n)
{
    srand(time(NULL));
    return rand() % n;
}
int greater(char c1, char c2)
{
    if ((c1 == 'r') && (c2 == 'p'))
    {
        return 0;
    }
    else if ((c1 == 'r') && (c2 == 's'))
    {
        return 1;
    }
    else if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else if ((c1 == 'p') && (c2 == 's'))
    {
        return 0;
    }
    else if ((c1 == 's') && (c2 == 'r'))
    {
        return 0;
    }
    else if ((c1 == 's') && (c2 == 'p'))
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int playerscore = 0, compscore = 0, temp;
    char playerchar, compchar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the game of rock, paper and scissors \n");
    for (int i = 0; i < 3; i++)
    {
        printf("\n Choose  1 for rock, 2 for Paper and 3 for Scissors");
        printf("Player 1's turn: ");
        scanf("%d", &temp);
        playerchar = dict[temp - 1];
        printf("you chose %c \n\n", playerchar);

        printf("\n Choose  1 for rock, 2 for Paper and 3 for Scissors");
        printf("Computer's turn: ");
        temp = RandomGenerator(3);
        compchar = dict[temp];
        printf("computer chose %c\n", compchar);

        if (greater(compchar, playerchar) == 1)

        {
            compscore += 1;
            printf("Computer got it \n");
            printf("You: %d \n", playerscore);
            printf("Computer:%d \n", compscore);
        }
        else if (greater(compchar, playerchar) == -1)
        {
            compscore += 1;
            playerscore += 1;
            printf("It's a draw \n");
            printf("You: %d \n", playerscore);
            printf("Computer:%d \n", compscore);
        }
        else
        {
            playerscore += 1;
            printf("You got it \n");
            printf("You: %d \n", playerscore);
            printf("Computer:%d \n", compscore);
        }
    }

    if (compscore < playerscore)
    {
        printf("Congratulations!! You won the game");
    }
    else if (compscore > playerscore)
    {
        printf("Computer won the game");
    }
    else
    {
        printf("It's a draw");
    }

    return 0;
}