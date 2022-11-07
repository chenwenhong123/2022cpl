//
// Created by 2033834364 on 2022/9/24.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int high = 100 ;
    int number_of_tries=7;

   /*
    * (1)print the rules of the game to players.
    */

   printf("Let us play the Guess the Number game.\n"
          "The computer will generate a random number between 1 and %d.\n"
          "You have %d tries.\n",
          high,number_of_tries);

   /*
    * (2)generate a random number between 1 and high as the sceret number
    */
   srand(time( NULL));
   int secret = rand() % high + 1;
   printf("Test:secret = %d\n", secret);


   while (number_of_tries > 0) {
       /*
        * (3)ask the player to input his/her guess
        */
       printf("Please input your guess number . \n"
              "You still have %d tries.\n", number_of_tries);

       /*
        * (4)obtain the guessed number.
        * compare it with the secret number.
        * and inform the player of the result.
        */
       int guess = 0;
       scanf("%d", &guess);
       printf("Test:guess = %d.\n", guess);

       if (guess == secret) {
           printf("You Win!\n");
           break;
       } else if (guess > secret) {
           printf("guess > secret");
       } else {
           printf("guess < secret");
       }

       /*
        * (5)repeat (3)and (4) until the player wins or loses
        */
       number_of_tries--;
   }
    return 0;
}
