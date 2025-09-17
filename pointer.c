#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h> 

//  Pointer is just a value which happens to be an addresss. To declare a pointer 

//  Use this example: 

int main(){
    int x = 35;
    int *pntX = &x;
    printf("The value of pointer is %d\n", x); 

    printf("The value of pointer's address is %p\n", pntX); // This line prints the memory address stored in the pointer pntX. Since pntX was assigned the address of x (&x), this will be the memory address of the variable x.

    printf("The value of pointer is %p\n", &pntX); // This line prints the memory address of the pointer variable pntX itself. Every variable, including pointers, has its own memory location. The ampersand (&) operator gets the address of the variable it precedes. In this case, it gets the address of pntX. This address will be different from the address stored inside pntX

    printf("The value of pointer is %p\n", *&pntX); // This line first gets the address of the pointer variable pntX using &pntX. Then, the dereference operator (*) is applied to this address.
    return 0;
}

int main(){
    int a,b;
    a = 35;
    b = 25;

    int* p;
    p = &a;

    printf("The value of variable is %d\n", *&a);
    printf("The memory address is: %p\n", p);

    *p = b;

    printf("The value of variable is %d\n", *&a=b);
    printf("The memory address is: %p\n", p);


    return 0;
}

