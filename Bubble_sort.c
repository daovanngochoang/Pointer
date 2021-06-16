#include<stdio.h>

void bubble_sort(int *A, int size){
    int i, j, temp;

    for (i = 0; i < size ;i++){
        printf("A[i]===== %d\n",A[i]);
        for (j = 0; j < size -1; j++){
            if (A[j] > A[j+1]){
                temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                printf("[ %d %d %d %d %d %d ] \n",A[0], A[1], A[2], A[3], A[4], A[5]);
            }
          

        }
    }
}


int main()
{
    int A[] = {3, 1, 10, 9, 7, 6};
    int NumOfElements = sizeof(A) / sizeof(A[0]);

    bubble_sort(A, NumOfElements);
}