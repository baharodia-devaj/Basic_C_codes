#include <stdio.h>     
#include <stdlib.h>
int main()
{
    int number, guess, nguesses = 1;
    number = rand() % 100 + 1;
    do
    {
        printf("guess the no. b/w 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("lower number please\n");
        }
        else if (guess < number)
        {
          //  printf("higher number please\n");
            printf("please guess highernumber\n");
        }
        else
        {
            printf("you guessed it in %d attempts \n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}
