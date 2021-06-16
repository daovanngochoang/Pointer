# include<stdio.h>

void A(){ // call back function
    printf(" hello world \n");
}

void B(void(*FuncPointer)()){ // function pointer as argument
    FuncPointer(); // call back function that FuncPointer points to
}


int main(){
    B(A);
}