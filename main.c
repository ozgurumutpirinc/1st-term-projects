#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void game_screen()
{
    int num, guess, counter;
    char c_e;

    srand(time(0));
    num = rand()%101; //Bilgisayar 1'den 100'e kadar bir sayı tutar

    counter = 0; //Tahmin hakkı

    

    while(counter < 5)  //Kalan tahmin hakkı 5'ten küçük olduğu sürece oyun devam eder
    {
        printf("Guess the number which computer has selected:\n");
        scanf("%d", &guess);
        if(guess > num)
        {
            printf("Your guess is greater than the number\n");
            counter++;
        }
        else if(guess < num)
        {
            printf("Your guess is less than the number\n");
            counter++;
        }
        else
        {
            char c_e;   //Continue or exit
            printf("Correct! Your guess is true, the number is %d\n", num);
            printf("Press y or Y to play again\n");
            scanf(" %c", &c_e);
            if(c_e == 'Y' || c_e == 'y')
            {
                game_screen();
            }
            else
            {
                return;
            }
        }
    }
    if(counter == 5)
        {
            char c_e;   //Continue or exit
            printf("You do not have any guessing try left. The number is %d\n", num);
            printf("Press y or Y to play again\n");
            scanf(" %c", &c_e);
            if(c_e == 'Y' || c_e =='y')
            {
                game_screen();
            }
            else
            {
                return;
            }
        }
}

int main(void)
{
    game_screen();

    return 0;
}
