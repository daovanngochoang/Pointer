#include<stdio.h>

int main (){
    int a =  5;
    int* p = &a; // p = address of a, in address of a *p has the value of 5 (1)

    int** q = &p; // q = address of p, *q is the value of p which is the address of a (2)
    // **q = *p = value of a = 5;  from (2) and (1)
    // **q refer to the value of the value that p carrying ( can be seen as *p) which is the address of a
    // => **q is store the value at the address of a which is equal to 5 (3)

    int*** r = &q; // r = address of q, *r refer to the value that q carrying which is the 
    // address of p. *r = q = address of p from there we can use (3)(2)(1) to prove
    // 1. r = address of q
    // 2. *r = q = address of p
    // 3. **r = *q = q = address of a
    // ==> ***r = **q = *p = a = 5

    printf("a address %p \n", p);
    printf("size pointer = %ld\n", sizeof(p));
    printf("p address %p \n", q); 
    printf("q address %p \n", r);
    printf("r address %p \n", &r);

    printf("*p = %d \n", *p); // the value where p pointing at, which is the address of a where contain the value 5
    printf("*q = %p \n", *q); // *q = p = address a, the value at the address of p is the addess of a
    printf("**q = %d \n", **q);// return *p is value of a
    printf("**r = %p \n", **r); // return *q = p is the address of a
    printf("***r = %d \n", ***r);// return **q = *p is value of a
    printf("*r = %p adu \n", *r); // return q = the address of p



    ***r = 10; // change the value at the address of a = 5 to a = 10
    printf("reassign value at the address of a to %d \n", a);

    **q = *p+2; // the value at the address of a + 2 = 10 + 2
    printf(" get the value at the address of a and plus 2 = %d \n", a);






}