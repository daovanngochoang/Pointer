#include<stdio.h>

int main(){
    // 1 int = 4 bytes
    // 1 char = 1 bytes
    // 1 float = 4 bytes

    int a = 1025; // the binary expression of a is  00000000 00000000 00000100 [00000001] => the starting memory located
                    //  ==> the calculation is 1x2^10 + 1*2^0 = 1024 + 1 = 1025
    int *p = &a;

    printf("size of interger is %ld \n", sizeof(a)); 
    printf("Address : %p, value : %d\n", p, *p); // return the memory address and value of a
    // => to read the number, the memory reader will read 4 bytes from the starting point.

    printf("Address : %p, value : %d\n", p+1, *(p+1)); // because int need 4 bytes => if p + 1 thats mean
    // the pointer point at the next 4 bytes. 
    

    char *pc = (char *)p; // type casting 
    //  the line above is assign the value at the address of a, that mean p will point at
    // the address but *p will point at the value of a.
    // when casting the value at *p to char ==> they read just 1 bytes after the starting address 
    // and the first byte is '00000001' = 1 (1)

    // ==> if a is an interger => the pointer look up to the next 4 bytes from the starting address
    // for example 1025 in this case, the starting address with the value '00000001', the reader read 
    // this value and then 00000100 and then '00000000' '00000000'.

    // but when casting the type char for the value at p (which is *p) ==> read one byte 
    // ==> (1)

    printf("size of interger is %ld \n", sizeof(char)); // %ld is use to format the long int
    printf("Address : %p, value : %d\n", pc, *pc); // from (1)
    printf("Address : %p, value : %d\n", pc+1, *(pc+1)); // when the pointer point at the next address
    // => it point at the next byte that mean +1 byte after the starting => which is 00000100 = 4
    
    printf("%d\n", (char)*p);



}