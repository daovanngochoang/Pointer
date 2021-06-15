#include<stdio.h>
#include<string.h>

void print_str(char* C){
    while (*C != '\0')
    {
        printf("%c", *C );
        C++ ;
      }
    
    printf("\n");

}

void main(){
    char S[] = "hoang";
    // computer store string in a array of chars, and int the end they add an unknown char 
    // which can be seen as the ending sign of the string. 

    print_str(S);


    char* pS;
    pS = S;
    printf("%p \n", pS);
    printf("%s \n", pS);
    printf("%c \n", pS[1]);



    printf("%p \n", &S); // this is the address of this string
    printf("%p \n", &S + 1); // when we + 1 ==> the pointer will move to the next
    // address that equal to the size of this string = elements + the unknown ending sign
    // == 5+1 = 6 = sizeof (S) 

    printf("%ld \n", sizeof(S)); // 5 chars + 1 unknown char = 5 bytes + the last byte = 6
    printf("%ld \n", strlen(S)); // 5 char


}