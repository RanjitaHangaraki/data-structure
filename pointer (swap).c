#include <stdio.h>

void swap(int *ptr_a, int *ptr_b) {
    int temp; 

    temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    printf("--- Before Swap ---\n");
    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);

    swap(&x, &y); 

    printf("\n--- After Swap ---\n");
    printf("Value of x: %d\n", x);
    printf("Value of y: %d\n", y);

    return 0;
}
