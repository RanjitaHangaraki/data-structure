#include <stdio.h>

int main() {
    int data = 10;
    int *ptr; 
    ptr = &data; 

    printf("Original value of data: %d\n", data);
    *ptr = 50; 

    printf("Value of data after change using pointer: %d\n", data);
    printf("The address stored in ptr is: %p\n", (void*)ptr);
    
    return 0;
}
