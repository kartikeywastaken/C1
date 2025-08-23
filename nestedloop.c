#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 

int main(){

    int num[2][3] = {    // 2D arrays btw 2 is for the number of rows and 3 is for the number of elements in each row
        {1,2,3},
        {4,5,6}
    };

    int i, j;
    for(i = 0; i < 2; i++ ){
        for(j = 0; j < 3; j++){                  // nested loop btw
            printf("%d,", num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
