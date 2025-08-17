#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 

int main(){
    char guessU = 'n';
    int i = 1;
    printf("Choose a number b/w 1 and 10 and ill try to  guess it\n");
    while ( guessU != 'y')
    {

        printf("Is your number %d\n", i);
        scanf(" %c", &guessU);

        if (guessU == 'n')
    {
        i++;
    } 
    } 
    printf("Then The number you guessed is: %d", i);
    
    return 0;
}