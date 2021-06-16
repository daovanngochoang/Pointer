//
// Created by v-iverson on 6/16/21.
//

#include<stdio.h>
#include <stdlib.h>


int square(int x){
    return  x*x;
}

int SquareOfSum(int x, int y){
    int z = square(x + y);
    return z;

}
int main(){
    int a =4, b = 8, total;
    total = SquareOfSum(a, b);
    printf("%p \n", &SquareOfSum);
    printf("total = %d \n", total);


/*

function in C malloc, calloc, realloc anf free is to manage storage in heap.
- malloc, is function to create space in memory to store data.
- calloc same as malloc however, we can add the number of spaces to be created.
    + example, int* p = (int*) malloc(n*sizeof(int)); // create a space to contain n intergers.
    + we can use calloc instead, int* p = (int*) calloc(n, sizeof(int));
- realloc to resize the space allocated, it has 2 parameters which is the address of the space
that we want to resize, and the size of it. if the address is null ==> it will be malloc. and if the size is
0 => it gonna free the memory at the address that we putted there.
- free to free memory.

NOTE: if an data store in heap is not be free, then it still there that lead the memory 
leak problem (data not be cleared but keeping assign ==> full of memory)


 ==> below structure is the computer memory


            |              |
            |              |
            |   heap       |=> size is not fixed, can be extended to full memory
            |              |    dynamic memory allocation.
            |              |
            |--------------|
            |              |
            |              |
            |    stack     | ==> where functions call each others will be executed sequentially.
            |              |
            |              |
            |              |
            |--------------|
            |static/global | ==> where the static or global variables are store in
            |--------------|
            |   code       | ==> the code that human build using programming language in this
            |              |      case, we use C.


 - when the program is executed, it look at the main part (the main function) which is the one that will be execute
 first, then main will be putted at stack.
    - main is allocate at stack first, then main is executed, store local variables a, b and then call the function
      SquareOfSum().
    - SquareOfSum will be added to stack on top of main, declare int z and call the function square()
     => square is add to stack on top of SquareOfSum.
    - square is executed then return the result to function SquareOfSum and square is free in stack,
    after that SquareOfSum is executed and return the result to the local variable total in main , and cleared in the stack.

    - main is continue, then main call printf
    - printf is added to stack, executed to print total then its cleared
    finally, then main is executed again, ended and cleared out of the stack.


 */
}












