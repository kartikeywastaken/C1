#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 

double sumArr(double array[], double size){
    double sum = 0.0;
    int i;
    for (i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
    
}

double avgArr(double array[], double size){
    double sum = 0.0;
    double avg;
    int i;
    for (i = 0; i < size; i++)
    {
        sum += array[i];
    }
    avg = sum/size;

    return avg;
}
int main(){

    int count = 0;
    double user_array[100];
    char flag = 'y';
    char user_choice;
    int i;

    while (count < 100 && flag == 'y' )
    {
        printf("Enter a number you wish to enter: ");
        scanf("%lf", &user_array[count]);
        count++;

        printf("Press 'y' to continue:");
        scanf(" %c", &user_choice);

        for (i = 0; i < count; i++)
    {
        printf("%f\n", user_array[i]);
    }
       printf("You have entered %d numbers untill now!\n", count);
       flag = user_choice;
    }
    printf("'n' was entered so the program has been termintated\n");

    // avgArr(user_array,count);
    // sumArr(user_array, count);

   double sum = sumArr(user_array, count);
   printf("The sum is: %f\n", sum);
   double avg = avgArr(user_array,count);
   printf("The average is: %f\n", avg);

    return 0;
}
