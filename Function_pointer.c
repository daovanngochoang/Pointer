#include<stdio.h>

int add(int a, int b ){
    return a+b;
}


int main(){

    int c;
    int (*FuncPointer)(int, int);  // function pointer declare
    FuncPointer = add;

    c = FuncPointer(2, 3); // execute via function pointer 
    printf("c = %d\n", c);


}