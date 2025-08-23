#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 
#include <time.h>

int getRandomNumber(){
    // You need 100 possible values, but you want them to start at 1. The expression would be (rand() % 100) + 1. The rand() % 100 gives you a number from 0 to 99, and adding 1 shifts that range to 1 to 100
    // For a range from 1 to 100 (inclusive)
    int randomNumber = (rand() % 100) + 1;
    return randomNumber;
}

int main(){
    srand(time(NULL));
    int userNumber;// taking input from user
    char choice = 'n'; // initial choice is assumed to be n
    int genRanNum = getRandomNumber(); // printing the random number
    printf("Choose a number b/w 1 and 100 and ill try to  guess it\n");
    while (choice != 'y') // as long as chocie is not equal to 'y'
    {
       printf("Is your number %d?", genRanNum);
       scanf(" %c", &choice);
       if (choice == 'y')
       {
        printf("The number you chose is: %d \n", genRanNum);
        return 0;
       }
       else if (choice == 'n')
        {
           genRanNum = getRandomNumber();
        }
        else
        {
            printf("Please enter a valid input! \n");
        }
    }
    
    return 0;
}


// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// // This function generates a random number between 1 and 100 (inclusive)
// int getRandomNumber(){
//     int randomNumber = (rand() % 100) + 1;
//     return randomNumber;
// }

// int main(){
//     srand(time(NULL));
//     char choice;
//     int genRanNum;

//     printf("Choose a number b/w 1 and 100 and I'll try to guess it\n");

//     do {
//        // Generate a new random number each time the loop starts
//        genRanNum = getRandomNumber();
       
//        // Prompt the user for a response
//        printf("Is your number %d? (y/n): ", genRanNum);
//        scanf(" %c", &choice);
       
//        // Loop until the user enters a valid response
//        while (choice != 'y' && choice != 'n') {
//            printf("Please enter a valid input! (y/n): ");
//            scanf(" %c", &choice);
//        }
       
//     } while (choice != 'y');
    
//     printf("The number you chose is: %d\n", genRanNum);
    
//     return 0;
// }
