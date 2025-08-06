#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5; // current number of elements
    int pos, i;

    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nEnter position to delete (0 to %d): ", size-1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= size) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to left
        for (i = pos; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--; // decrease size after deletion

        printf("Array after deletion: ");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }
}



