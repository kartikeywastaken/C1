#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 


struct user_data{ // made a struct 
    char user_name[20];
    int user_health;
    char user_move;
    int x_cor, y_cor;
};

char map[10][10] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}, // # rep walls
        {'#', '@', '.', '.', '.', '.', '.', '.', '.', '#'}, // @ rep where the player starts
        {'#', '#', '#', '.', '#', '#', '.', '#', '.', '#'}, // . rep where player can move
        {'#', '.', '#', '.', '.', '#', '.', '#', '.', '#'}, //  T rep trap
        {'#', '.', '#', '.', '#', '#', '.', '#', '.', '#'}, // E rep exit where user can exit
        {'#', '.', '.', '.', '#', '#', '.', '#', '.', '#'},
        {'#', '.', '#', '#', '#', '#', '.', 'E', '#', '#'},
        {'#', '.', '.', '.', '#', '.', '.', '.', '.', '#'},
        {'#', '.', 'T', '.', '#', '.', '.', '.', '.', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
};

void position(struct user_data posi){ // to locate the player's position.
    for ( int i = 0; i < 10; i++) // takes a struct as an argument.
    {
        for ( int j = 0; j < 10; j++)
        {
            if (j == posi.x_cor && i == posi.y_cor) // when it iterates through the loop 
            { // at the point where posi.x and posi.y is same it will print "@"
                printf("@");
            } else {
                printf("%c", map[i][j]);
            }
            
        }
        printf("\n");
        
    }
    
}

struct user_data moveD(struct user_data p){ // a function using struct. which takes another struct as parameter
  int new_x = p.x_cor + 1; // assigning a new temp variable to check the new intended position
  int new_y = p.y_cor;
  
  if (new_x >= 0 && new_x <= 9 && map[new_y][new_x] != '#')
  {
    p.x_cor++;
    return p; // returns the updated p struct 
  } else {
    printf("Out of bounds!");
    return p; // returns the original p struct 
  }
  
}

struct user_data moveS(struct user_data p){
  int new_y =  p.y_cor + 1;  // made a temp variable to check if move is valid or not.
  int new_x = p.x_cor;                                
  if (new_x >= 0 && new_x <= 9 && map[new_y][new_x] != '#') // using new_x and new_y to check 
  {
    p.y_cor++;                                   // the validity of moves which are to be made
    return p; // return the updated p struct 
  } else {
    printf("Out of bounds!");
    return p; // return the original p struct 
  }
}

struct user_data moveW(struct user_data p){
  int new_y =  p.y_cor - 1;
  int new_x = p.x_cor;
  if (new_x >= 0 && new_x <= 9 && map[new_y][new_x] != '#')
  {
    p.y_cor--;
    return p; // return the updated p struct 
  } else {
    printf("Out of bounds!");
    return p; // return the original p struct 
  }
}

struct user_data moveA(struct user_data p){
  int new_x = p.x_cor - 1;
  int new_y = p.y_cor;
  if (new_x >= 0 && new_x <= 9 && map[new_y][new_x] != '#')
  {
    p.x_cor--;
    return p; // return the updated p struct 
  } else {
    printf("Out of bounds!");
    return p; // return the original p struct 
  }
}

//---------------------------------------------------------
// This is the function signature for 'moveS'.
// It defines how the function interacts with your program.
//---------------------------------------------------------

// struct user_data: 
// This is the return type of the function.
// It means that after the function finishes its job,
// it will return a complete 'struct user_data' variable.

// moveS: 
// This is the name of the function. 
// You'll use this name to call the function later in your code.

// (struct user_data p):
// This is the function's parameter.
// It tells the function to expect a 'struct user_data' variable
// as input, which it will refer to as 'p' inside its code.


int main(){
    
    struct user_data player1;
    {
        printf("Enter player name: ");
        scanf(" %s", player1.user_name);
        printf("Your current health is: 100 \n");
        player1.user_health = 100;

        player1.x_cor = 1;
        player1.y_cor = 1;

        while (player1.user_health > 0)
        {
            
            // if (player1.x_cor == 7 && player1.y_cor == 6)
            // {
            //   printf("Congratulations, you found the exit!\n");
            //   break;
            // }
          
            position(player1);
            printf("Enter w/a/s/d to move!: \n");
            scanf(" %c", &player1.user_move);

            if (map[player1.y_cor][player1.x_cor] == 'E')
            {
              printf("Congratulations, you found the exit!\n");
              break;
            }
            if (map[player1.y_cor][player1.x_cor] == 'T')
            {
              printf("You fell into a trap! You lose half your health\n");
              player1.user_health = player1.user_health/2;
            }

            if (player1.user_move == 'w')
            {
                player1 = moveW(player1); // updating the value of the 
                position(player1); // variable player 1 by passing the function move accordingly
            }
            if (player1.user_move == 'a')
            {
                player1 = moveA(player1);
                position(player1);
                
            }
            if (player1.user_move == 's')
            {
                player1 = moveS(player1);
                position(player1);
                
            }
            if (player1.user_move == 'd')
            {
                player1 = moveD(player1);
                position(player1);
                // trying to print the updated map 
            }   
        }
         printf("You died! \n");
        
        
    };

    
    return 0;
}