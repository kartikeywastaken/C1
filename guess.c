#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 

int main(){
    char guessU = 'n'; // initialising the guessU by giving it value 'n'
    int i= 1; // i = 0
    int count = 0;
    printf("Choose a number b/w 1 and 10 and ill try to  guess it\n");
    while ( guessU != 'y' && count < 10)   // continues untill guess is not y
    {
        printf("Is your number %d\n", i);
        scanf(" %c", &guessU);

        if (guessU == 'y')
        {
            printf("The number you chose is: %d", i);
            return 0;
        } 
        else if (guessU == 'n')
        {
            i++;
            count++;
        }
        else
        {
            printf("Please enter a valid input! \n");
            continue;
        }
    }
    if (count == 10)

    {
        printf("Sorry i couldn't guess the number");
    } 

    return 0;
}