#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 

struct student { //initialising a struct named student
    char stdName[20]; // declaring what it can hold, name can be 20 characters long.
    int stdAge;
    double stdgpa;
};

// int maxAge(char max_student_name[],int std_Age[], int size){
//     int max_age, i, max_index;
//     char student_with_max_age[20];
//     max_index = 0;

//     max_age = std_Age[0];
//     for ( i = 0; i < size; i++)
//     {
//         if (max_age < std_Age[i])
//         {
//             max_age = std_Age[i];
//             max_index = i;
//         } else {
//             printf("The max age is: %d & the name is: %s", max_age, max_student_name[0]);
//         }
        
//     }
//     printf("The max age is: %d & and the of the student with max age is: %s", max_age, max_student_name[max_index]);
    

// }

int maxAge(struct student array[], int size){ // passing parameters (an array and size of the number of students)
    int i, max_age, max_index;
    char student_with_max_age[20];
    max_index = 0; // initialising max index with 0

    max_age = array[0].stdAge; // assuming the max age to be of the first student 
    for ( i = 1; i < size; i++)
    {
        if (max_age < array[i].stdAge)
        {
            max_age = array[i].stdAge;
            max_index = i;
        }  
    }
    // printf("The max age is: %d\n", array[max_index].stdAge);
    return max_index;// return the new or the already assingned max index
}

double average_gpa(struct student array[], int size ){  // a function named average gpa which takes two parameters stdGpa and size
    double sum, avg;
    int i;                                       // function to calculate gpa
    sum = 0.0;
    for ( i = 0; i < size; i++)
    {
        sum += array[i].stdgpa; //sum = sum + array[i].stdgpa;
    }
    avg = sum/size;
    return avg;
}

int main(){ // the main function begins
    int count = 0;
    char flag =  'y';
    struct student roster[20]; // this tells us that roster can hold name, age, gpa for 20 students
    char user_choice;
    int i, min_age[20];
    double avgGpa;
    int maxAgee;
    double gpa[20];  // an array which can hold 20 elements (will be ussed to store the values of roster.stdgpa)
    char name[20]; 

    while ( count < 20 && flag == 'y')
    {
        printf("Enter Students Name:"); 
        // fgets(roster[count].stdName, (20), stdin);
        scanf(" %s", roster[count].stdName);  // count tells you the current loop number you are on

        printf("Enter Students Age:"); // and roster[count].input takes the input for that cycle/loop
        scanf(" %d", &roster[count].stdAge);

        printf("Enter Students gpa:");
        scanf(" %lf", &roster[count].stdgpa);

        printf("Enter 'y' to continue");
        scanf(" %c", &user_choice);

        count++; // increments the count function by 1 [ count = count +1 ]

        printf("You have made %d entries up untill now!\n", count);

        flag = user_choice; // used to terminate the program if flag = user choice the func continues 
        // or it terminates as per the condition of the while loop
    }
    printf("Program has been terminated because 'n' was entered!\n");

    for (i = 0; i < count; i++) // to print all the stored data 
        {
            printf("Here is the array of %d student: \n", i); 
            printf("%s \n", roster[i].stdName);
            printf("%d \n", roster[i].stdAge);
            printf("%f \n", roster[i].stdgpa);

            // gpa[i] = roster[i].stdgpa; // makes a new array which stores the data of roster gpa in a single array
            // min_age[i] = roster[i].stdAge;
            // name[i] = roster[i].stdName;
        }   
    avgGpa = average_gpa(roster, count); // directly passing roster as an arguement after making a new struct with student heading and array as body
   // avgGpa = average_gpa(gpa, count); 
    printf("%f is the average gpa\n", avgGpa);

    maxAgee = maxAge(roster, count);
    printf("The max age is: %d\n", roster[maxAgee].stdAge);
    printf("and the name is: %s", roster[maxAgee].stdName);


    return 0;
}