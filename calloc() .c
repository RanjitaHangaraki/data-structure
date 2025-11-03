#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory using calloc
    ptr = (int*) calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Memory successfully allocated using calloc.\n");

    // Display default initialized values (0)
    printf("The elements of the array are: ");
    for (i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    free(ptr); // free the allocated memory
    return 0;
}
