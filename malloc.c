#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory using malloc
    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Memory successfully allocated using malloc.\n");

    // Assign values
    for (i = 0; i < n; i++)
        ptr[i] = i + 1;

    printf("The elements of the array are: ");
    for (i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    free(ptr); // free the allocated memory
    return 0;
}
