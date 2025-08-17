#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 
#define MAX_TASKS 100
#define MAX_DESC_LEN 256
struct taskmanager
{
    int id;
    char TaskName[MAX_DESC_LEN];
    int TaskStatus; // use boolean 0 / 1 
};



int main(void){
    int taskCount = 0;
    char taskAdd = 'y';
    struct taskmanager newTask[MAX_TASKS];
    while (taskCount < 100 && taskAdd == 'y')
    {
    printf("--- Enter Task Details ---\n");
    
    printf("Enter New tasks id: \n");

    scanf("%d", &newTask[taskCount].id);
    // this can be used too  fgets(allTasks[taskCount].TaskName, MAX_DESC_LEN, stdin);

    printf("Enter Task Name \n");
    while (getchar() != '\n'); // useful very useful actually
    scanf("%s", newTask[taskCount].TaskName);

    printf("Enter task Status: \n");
    scanf("%d", &newTask[taskCount].TaskStatus); 
    printf("\n \n");

    taskCount++;


    if (taskCount < 100)
    {
        printf("Do you want to continue: (y/n)"); // can also use ternary operator
          // taskCount < 100 ? printf("Do you want to continue?"), scanf("%c", &taskAdd) : printf("All 100 tasks entered!"); taskAdd = 'n';
          // pretty useful 
        scanf(" %c", &taskAdd);
    } else { 
        printf("All 100 tasks entered!");
        taskAdd = 'n';
    }

    }

    if (taskCount == 0)
    {
        printf("No tasks entered.\n");
    } else {
        for (int i = 0; i < 100; i++)
        {
            printf("Task #%d\n", i + 1); // User-friendly task number
            printf("  ID: %d\n", newTask[i].id);
            printf("  Name: %s\n", newTask[i].TaskName);
            printf("  Status: %d\n", newTask[i].TaskStatus);
            printf("------------------------\n"); // Separator for readability
        }
        
    }

    return 0;
}