#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int ans, nb, guess=0;
    char car;

    do{
    srand(time(NULL));
    nb= rand()%1000;
     printf("I have a number between 1 and 1000.\n");
     printf("Can you guess my number?\n");
     printf("Please type your first guess.\n");
        do{
    scanf("%d", &ans);

     if(ans>nb)
     {
         printf("too high, try again\n");
     }
   else if(ans<nb)
     {
        printf("too low, try again\n");
     }
   else if(ans==nb)
    {
        printf("congrats!!! you guessed the right number.\n");
        printf("you guessed %d times until you got the right answer\n",guess);
        printf("would you like to play again?\n");
        printf("y/n\t");
        scanf(" %c", &car);
        guess=0;
    }
            guess++;
        }while(ans!=nb);
}while(car!='n');

}
