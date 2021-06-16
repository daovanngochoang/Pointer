#include<stdio.h>

void main(){
    int A[3][3] = {{1,2,3},{4,5,6}, {7,8,9}};

    int (*pA)[3] = A;

    printf(" pA = %p \n", pA); // return the the address of the first 1-D array
    printf(" pA[0] = %p \n", pA[0]); // return the address of the first 1-D array

    printf(" *(pA[0] + 1) = %d \n", *(pA[0] + 1)); // value of the first 1-D array at 1

    printf(" *(A + 1) = %p \n", A + 1); // address of the second 1-D array


    printf("&A[0][0] = %d \n", *(*(A+1) + 1)); // value of the second 1-D array at index 1
    printf("*(*(pA+1) + 1) = %d \n", *(*(pA+1) + 1)); // value of the second 1-D array at index 1 as well
    printf("*(*(pA) + 1) = %d \n", *(*(pA) + 1)); //  value of the first 1-D array at index 1


    printf("A[0][0] = %d \n", A[0][0]); // value of the first 1-D array at index 1

    /*
     - in the multiple dimensions array, the pointer is point at the first 1-D array 
     of thr multiple dimensions array. and when we assign a new pointer variable for the 
     array, it will be the first 1-D array's address and when the pointer value + 1 or i times 
     the pointer will point at the next 1-D array's address.

    - in the above case, we have the 2 dimensions array A [2][3], and the pointer is pointer
    is pA, then;
        + A[0] (A or pa) and A[1] (A + 1 or pA + 1) are return the address of the first and the second array, respectively
        + to get the specific value of the elements in each 1-D array
            => *(*(pA) + 1) it will return the value of the first 1-D array at index 1
            or *(*(pA + 1) + 1) to get the value of the second 1-D array at index 1.


    */


}