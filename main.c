#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 

/*
int main() 
{
    char Name[] = "Alex";       //<== this is an array       
    int Age = 20;  
    printf("This is me %s and I am %d yrs old but my buddy is %d yrs older than me\n", Name , Age , 12 );
    // can also use a variable or incase of integer just add the number maybe??
    // for int %d, for character strings %s, for single char %c, for decimal %f
    // to print a lot of letter ( characters together to form a word ) [] are used at the end of the variable ts an array
    // a line can have mutiple format specifiers like the one example above but each has a specific location
     // format specifier specifies the type of data ypure trying to pring like %d for int, %c for char single character output, %s for string and then specify the variable type
    Age = 25;
    printf("my age is my %d\n", Age);

    // operation (mathematical operation) b/w an integer and floating point number gives you a floating value back
// if you do some kind of operation on integers use %d rather than %f, in case you divide it if you use %d youll get an integer back whereas if you use %f you will get values in decimals too

// if you use pow(2,3) you will get the output as 2^3
    printf("My Name this time is %s", "ololelel\n");

    printf("%f\n", pow(2,3));

    char name[10];      //<== this too is an array
    printf("Ola enter name: ");
    scanf("%s", name);
    printf("your name is: %s\n", name);

    char name2[10];
    printf("name pls:");
    scanf("%s", name2);
    printf("Your name is : %s\n", name2);


    float num1;
    printf("Enter first number to add : ");
    scanf("%f", &num1);

    float num2;
    printf("Enter second number to add : ");
    scanf("%f", &num2);

    printf("the sum of the numbers is : %f\n", num1 + num2);

    int nombers[] = {1,2,3,4,5,6,};
    printf("%d\n", nombers[1]);
//  int nombers[] = {1,2,3,4,5,6,}; <== arrays
    // scaf dosent include spaces or words after a space so we can use fgets but it has a a problem too 
    return 0;
}

*/
/*void f1(char name[], int age) // f1 is defined before main, so it's known
{
    printf("Hello %s, you are %d yrs old\n", name, age);

}*/

/*
struct Meow // combines multiple data types into one like int, array, char together 
{
    char catName[20];
    char catType[20];
    int catAge;

};

int main(){
    struct Meow orange;
    orange.catAge = 2;
    strcpy(orange.catName, "Hitler");
    strcpy(orange.catType, "Orange");

    printf("Name: %s \n", orange.catName);
    printf("Type: %s \n", orange.catType);
    printf("Age: %d \n", orange.catAge);
    
    struct Meow white;
    white.catAge = 4;
    strcpy(white.catName, "white");
    strcpy(white.catType, "White");

    printf("Name: %s \n", white.catName);
    printf("Type: %s \n", white.catType);
    printf("Age: %d \n", white.catAge);

    return 0;
}
*/

/*
int main(){
    char grade;
    printf("Enter your grade");
    scanf("%c", &grade);
    switch (grade)
    {
    case 'A':
        printf("Well done");
        break;

    case 'B':
        printf("Nice Try");
        break;

    case 'C':
        printf("better luck next time!");
        break;
    }
    return 0;
}
*/

/*int main(){

    int index = 1;
 // there is something known as do while loops too the condition comes after the curly braces and do comes before the initial curly brace
    while (index <= 5)
    {
        printf("number is %d \n", index);
        index = index + 1; // could also write it as index++
    }
    
    return 0;
}*/

/*int main(){
    int numWin = 34;
    int numG;
    int guessC = 0;
    int guessL = 3;
    int out = 0;

    while (numG != numWin && out == 0 ){
        if (guessL > guessC)
        {
            printf("Choose a number: \n");
            scanf("%d", &numG);
            guessC++;

        } else {
            out = 1;
            printf("Out of guesses");
        }
        
    } 
    if (out == 1)
    {
        printf("You have run out of guesses!");
    } else {
        printf("You win!");
    }
    
    return 0;

}*/

// int main(){

//     int num[2][3] = {    // 2D arrays btw 2 is for the number of rows and 3 is for the number of elements in each row
//         {1,2,3},
//         {4,5,6}
//     };

//     int i, j;
//     for(i = 0; i < 2; i++ ){
//         for(j = 0; j < 3; j++){                  // nested loop btw
//             printf("%d,", num[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


/*int main(){
    int age = 30;
    int *pAge = &age; // this is how you store the value of a pointer type variable
     // but this can only be done for variables present inside the code itself
    printf("memory address for age is: %p \n", &age); // &age is the data type 'pointer'

    printf("memory address for age is: %p \n", pAge);

    printf("memory address for age is: %d \n", *&age);// another method to de reference a pointer

    printf("The Value of the memory address: %d \n", *pAge);// This is known as de-referencing a pointer which essentially means using the given memory address to fetch the data in it

    FILE * fpointer = fopen("test.txt","a"); // w can be replaced by r -> read,  w -> create new file or write in an existing file, a -> to append info
    fprintf(fpointer, "\n this works too!");

    fclose(fpointer);
    return 0;
}*/ 

// i++ (post increment operator) use, then increase
// ++i (pre increment operator) increase, then use

//strlen() tells a program how long a certain string is

// void test(char x[], int y){ // ts how you make a function
//     printf("ts your name %s\n", x); 
//     printf("Your age: %d\n", y);
// }

// int main(){ // ts how you callback a function
//     char name[10];
//     int age;
//     printf("Enter your name: "); 
//     scanf("%s", name);
//     printf("Enter your age: ");
//     scanf("%d", &age);
//     test(name, age); // passing arguments
//     return 0;
// }

// double calc_area(double length, double width){
//     double area = length * width;
//     return area;
// }

// int main(){
//     int enter_length, enter_width;
//     printf("Enter Length: ");
//     scanf("%d", &enter_length);
//     printf("Enter Width: ");
//     scanf("%d", &enter_width);
//     double print_area = calc_area(enter_length, enter_width);
//     printf("The area is: %f\n", print_area);
//     return 0;
// }



// int is_even(int x){
//    int rem = x%2;
//    if (rem == 0)
//     {
//         return 0;
//     } else {
//         return 1;
//     }
//     return rem;
// }

// int main(){
//     int num;
//     printf("Choose a number: ");
//     scanf("%d", &num);
//     int rem1 = is_even(num);
//     if (rem1 == 0)
//     {
//        printf("Number is divisible by 2");
//     } else if( rem1 == 1){
//         printf("Number is not divisible by 2");
//     }
//     return 0;
    
// }


// // Function definition for is_even
// // It takes one integer parameter 'x'
// // It returns the remainder when 'x' is divided by 2 (0 for even, 1 for odd)
// int is_even(int x) {
//     int rem = x % 2; // Calculate the remainder
//     return rem;      // Return the remainder
// }

// int main() {
//     int num; // Local variable to store the user's number

//     printf("Choose a number: ");
//     // Read an integer from the user
//     // Added a basic check for scanf success (optional, but good practice)
//     if (scanf("%d", &num) != 1) {
//         printf("Invalid input. Please enter an integer.\n");
//         return 1; // Indicate an error
//     }

//     // Call is_even and store its returned value in 'rem1'
//     int rem1 = is_even(num);

//     // Use the stored remainder to determine and print if the number is even or odd
//     if (rem1 == 0) { // If the remainder is 0, the number is even
//         printf("The number is divisible by 2\n");
//     } else { // If the remainder is not 0 (i.e., 1), the number is odd
//         printf("The number is not divisible by 2\n");
//     }

//     return 0; // Signal successful program execution
// }
// int main(){
//     int my_int = 10;
//     int *ptr_int = &my_int;
//     printf("value of my_int is: %d\n", my_int);
//     printf("value of pointer my_int is: %p\n", ptr_int);
//     *ptr_int = 200;
//     printf("1. Value of ptr_int is now: %p\n", &ptr_int);
//     printf("2. Value of ptr_int is now: %p\n", ptr_int);

//     return 0;
// }

// while loop: checks a condition, then executes a block of code 
// do while loop: first executes a block of code then, check the given condition 


// double wallet_balance = 0.0; // Global variable

// void add_money(double amount){
//     wallet_balance = wallet_balance + amount;
// }

// int withdraw_money(double amount){
//     if (amount <= wallet_balance) // Using <= for exact match, as discussed
//     {
//         wallet_balance = wallet_balance - amount;
//         return 1; // Success
//     } else {
//         printf("You don't have enough money!\n");
//         return 0; // Failure
//     }
// }

// void get_balance(){
//     printf("Current balance is: %.2f\n", wallet_balance); // Added .2f for standard currency display
// }

// int main(){
//     get_balance(); // Prints initial balance
    
//     add_money(100.0); // Added .0 for clarity
//     printf("Current balance after adding 100: %.2f\n", wallet_balance);
  
//     withdraw_money(50.0); // Added .0
//     printf("Current balance after withdrawing 50: %.2f\n", wallet_balance);
    
//     withdraw_money(70.0); // Added .0
//     printf("Current balance after withdrawing 70: %.2f\n", wallet_balance);

//     return 0; // Indicate successful execution
// }

// #include <stdio.h> // Include standard input/output library

// // Declare a global variable for the wallet balance
// double wallet_balance = 0.0;

// // Function to add money to the wallet
// // Takes an 'amount' as a double parameter
// // Has a 'void' return type because it directly modifies the global variable
// void add_money(double amount) {
//     wallet_balance = wallet_balance + amount;
// }

// // Function to withdraw money from the wallet
// // Takes an 'amount' as a double parameter
// // Returns 1 for success (sufficient funds), 0 for failure (insufficient funds)
// int withdraw_money(double amount) {
//     if (amount <= wallet_balance) { // Using <= to cover exact matches too
//         wallet_balance = wallet_balance - amount;
//         return 1; // Indicate successful withdrawal
//     } else {
//         // As per problem, print insufficient message from within the function
//         printf("Transaction failed: Insufficient funds!\n");
//         return 0; // Indicate failed withdrawal
//     }
// }

// // Function to get the current wallet balance
// // Takes no parameters (void)
// // Returns the current wallet_balance as a double (THIS IS A KEY CORRECTION)
// double get_balance() {
//     return wallet_balance; // Simply return the global balance
// }

// int main() {
//     double current_bal; // Local variable to store balance retrieved from get_balance()
//     int withdrawal_status; // Local variable to store the status from withdraw_money()

//     printf("--- Wallet Simulation ---\n");

//     // Initially print the balance using get_balance.
//     // CORRECTION: Call get_balance() to GET the value, then print it from main
//     current_bal = get_balance();
//     printf("Initial balance: $%.2f\n", current_bal);

//     // Call add_money to add $100.00.
//     add_money(100.00);
//     current_bal = get_balance(); // Get updated balance
//     printf("\nAdded $100.00.\n");
//     printf("Balance after adding money: $%.2f\n", current_bal);

//     // Call withdraw_money to withdraw $50.00. Check its return value and print a success/failure message.
//     printf("\nAttempting to withdraw $50.00...\n");
//     // CORRECTION: Capture the return value and use an if/else to print based on status
//     withdrawal_status = withdraw_money(50.00);
//     if (withdrawal_status == 1) {
//         printf("Withdrawal of $50.00 successful!\n");
//     } else {
//         // The withdraw_money function already prints "Insufficient funds!",
//         // but this demonstrates main's reaction to the return value.
//         printf("Withdrawal of $50.00 failed.\n");
//     }
//     current_bal = get_balance(); // Get updated balance
//     printf("Balance after first withdrawal attempt: $%.2f\n", current_bal);

//     // Call withdraw_money to withdraw $70.00. Check its return value and print a success/failure message.
//     printf("\nAttempting to withdraw $70.00...\n");
//     // CORRECTION: Capture the return value and use an if/else to print based on status
//     withdrawal_status = withdraw_money(70.00);
//     if (withdrawal_status == 1) {
//         printf("Withdrawal of $70.00 successful!\n");
//     } else {
//         printf("Withdrawal of $70.00 failed.\n");
//     }
//     current_bal = get_balance(); // Get updated balance
//     printf("Final balance: $%.2f\n", current_bal);

//     return 0; // Signal successful program execution
// }

// double wallet_balance = 0.0; // initialising balance

// void add_money(double amount){ // func to add money
//     wallet_balance = wallet_balance + amount;
// }

// int withdraw_money(double amount){ // func to withdraw money
//     if (amount < wallet_balance)
//     {
//         wallet_balance = wallet_balance - amount;
//         return 1;
//     } else {
//         printf("You dont have enough money!\n");
//         return 0;
//     }
// }

// double get_balance(){ // to update balance
//     return wallet_balance;
// }

// int main(){
//     int flag = 1; // to help quit while function
//     char opt; // opt input from user
//     double current_bal = get_balance(); // current balance from wallet balance
//     int withdrawl_status; // to check if we have enough balance or not 
//     double addMoney, withMoney; // to add or withdraw money by taking input from user

//     while (flag != 0) // to loop function
//     {
//     printf("Choose an option given\n");
//     printf("To add money enter 'a' \n");
//     printf("To Withdraw Money enter 'b'\n");
//     printf("To exit enter 'c'\n");
//     scanf("%c", &opt); // taking input from user

//         switch (opt)
//     {
//     case 'a':
//         printf("Enter an amount to be added\n");
//         scanf("%lf", &addMoney);
//         add_money(addMoney);
//         current_bal = get_balance();
//         printf("Current balance is: %f\n", current_bal);
//         break;

//     case 'b':
//         printf("Enter an amount to be withdrawn");
//         scanf("%lf", &withMoney);
//         withdrawl_status = withdraw_money(withMoney);
//         if (withdrawl_status == 1)
//         {
//            printf("Money has been withdrawn\n");
//            current_bal = get_balance();
//            printf("Current balance is %f", current_bal);
//         } else {
//            printf("Withdrawal of %f failed.\n", withMoney);
//         }
        
//         break;

//     case 'c':
//         current_bal = get_balance();
//         flag = 0;
//         printf("Current balance is: %f\n", current_bal);
//         printf("bye!\n");
//         break;
//     }

//     }
    
//    return 0;

// }

// struct okies {
//     char name[20];
//     int age;
// };

// int main(){
//     struct okies a;

//     printf("Enter your name: ");     // no need to enter another variable with name a.name 
//     fgets(a.name, (20), stdin);       // use strcpy tto print something not the printf function

//     printf("Enter your age: ");
//     scanf("%d", &a.age);
    
//     printf("Name: %s \n", a.name);
//     printf("Age: %d \n", a.age);
// }

// double sumArr(double array[], double size){
//     double sum = 0.0;
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         sum += array[i];
//     }
//     return sum;
    
// }

// double avgArr(double array[], double size){
//     double sum = 0.0;
//     double avg;
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         sum += array[i];
//     }
//     avg = sum/size;

//     return avg;


//     double arr[] = {2,3,4,7,1};
//     double sizeofarr = sizeof(arr)/sizeof(arr[0]);

//     int i;

//     for (i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
//     {
//         printf("%f\n", arr[i]);
//     }

//    double sum = sumArr(arr, sizeofarr);
//    printf("The sum is: %f\n", sum);
//    double avg = avgArr(arr, sizeofarr);
//    printf("The average is: %f\n", avg);

//     return 0;
// }

// double sumArr(double array[], double size){
//     double sum = 0.0;
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         sum += array[i];
//     }
//     return sum;
    
// }

// double avgArr(double array[], double size){
//     double sum = 0.0;
//     double avg;
//     int i;
//     for (i = 0; i < size; i++)
//     {
//         sum += array[i];
//     }
//     avg = sum/size;

//     return avg;
// }
// int main(){

//     int count = 0;
//     double user_array[100];
//     char flag = 'y';
//     char user_choice;
//     int i;

//     while (count < 100 && flag == 'y' )
//     {
//         printf("Enter a number you wish to enter: ");
//         scanf("%lf", &user_array[count]);
//         count++;

//         printf("Press 'y' to continue:");
//         scanf(" %c", &user_choice);

//         for (i = 0; i < count; i++)
//     {
//         printf("%f\n", user_array[i]);
//     }
//        printf("You have entered %d numbers untill now!\n", count);
//        flag = user_choice;
//     }
//     printf("'n' was entered so the program has been termintated\n");

//     // avgArr(user_array,count);
//     // sumArr(user_array, count);

//    double sum = sumArr(user_array, count);
//    printf("The sum is: %f\n", sum);
//    double avg = avgArr(user_array,count);
//    printf("The average is: %f\n", avg);

//     return 0;
// }





