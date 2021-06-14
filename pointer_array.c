#include<stdio.h>

int SumArray(int A[], int size){
    /*
    int A[] and int* A is the same, because when the program execute it just copy the pointer 
    address  of the first element in array.

    => cannot know the size of the array 
    */
    int i , sum = 0;

    for (i = 0; i<size; i++){
        sum += A[i];
        // sum += *(A+i); is also work

    }
    printf("sum of array = %d\n", sum);
    return sum;

    }
int main (){


    int A[] = {1,2,3,4,5,6,7}; // size A = sum of bytes of all elements in a 
    printf("size of A = %ld \n", sizeof(A)); 

    int size = sizeof(A)/ sizeof(A[0]); // number of elements = size A / size of element
    SumArray(A, size);

    int* p = A; // A is the pointer at the first element
    
    printf("print &A = %p\n", &A ); // when we print a => it print the first component's address
    printf("print A = %p\n", A ); // the same as the above expression

    printf("print A = %d\n", A[1] );
    printf("print p[1] = %d\n", p[1] );

    printf("print *(p + 1) = %d\n", *(p + 1) );


    for (int i =0; i < 6; i++){
        printf("adress of index %d = %p and value is %d \n", i, &A[i], A[i]);
    }
    printf("\n\n");
    for (int i =0; i < 6; i++){
        printf("address of index %d = %p and value is %d \n", i, p+i, *(p+i));
    }

}



/*
- when a program is compiled, everything inside control by pointer.
- an Array is a series of value adjacent with the others, so the pointer at the first element
is represented the array, pointer + 1 will be the next element, and so on.

*/