#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5};  // Initial array
    int size = 5;                   // Current size of array
    int pos, value;

    printf("Enter position to insert (1 to %d): ", size + 1);
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right
    for (int i = size - 1; i >= pos - 1; i--) {
        arr[i + 1] = arr[i];
    }

    // Insert the value
    arr[pos - 1] = value;
    size++;

    // Print updated array
    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
