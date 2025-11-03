#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, new_n, i;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Memory successfully allocated using malloc.\n");

    for (i = 0; i < n; i++)
        ptr[i] = i + 1;

    printf("Initial array elements: ");
    for (i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    // Reallocate memory
    printf("\n\nEnter new size of array: ");
    scanf("%d",
