#include <stdio.h> //Number Guessing game
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int randomnumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;
    do
    {
        printf("Guess The Number\n");
        scanf("%d", &guessed_number);
        if (guessed_number > randomnumber)
        {
            printf("Lower number please!\n");
        }
        else if (guessed_number < randomnumber)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("CONGRATS!\n");
        }
        no_of_guesses++;
    } while (guessed_number != randomnumber);
    printf("your guessed number in %d guesses", no_of_guesses);
    return 0;
}