#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    //exp: ./test2 4 10 20 30 40
    if (argc < 3) {
        printf("Usage: %s <integer> <array_elements...>\n", argv[0]);
        return 1;
    }

    // Convert the first argument to an integer
    int n = atoi(argv[1]);

    // Allocate memory for the array
    int *array = (int *)malloc(n * sizeof(int));

    // Check if memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Read the array elements from command-line arguments
    for (int i = 0; i < n; i++) {
        array[i] = atoi(argv[i + 2]); // argv[2] is the first array element
    }

    // Print the array elements
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(array);

    return 0;
}