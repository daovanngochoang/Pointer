#include<stdio.h>
#include<stdlib.h>

int* add(int* a, int* b){ // called function
    int* c = (int*)malloc(sizeof(int)); // create a space in heap to store data
    /*
    because the function will be cleared after calling in stack so we cannot use
    the poiter to point at the address of c in stack, it gonna give us the gabage 
    value because the local variable c after executing is cleared.

    => store data in heap is an ideal solution.
    */

    *c = *a + *b; // assign data to the address of c in heap
    return c;  // return the address of c
}


int main(){

    int a =2, b =4;
    int* pointer = add(&a, &b); // add() return the pointer which is pointing at the address of the value of
                                // that we have added in the heap contain the value of function add()
    printf("sum = %d \n", *pointer); // this print the value in the address that the pointer points at

}