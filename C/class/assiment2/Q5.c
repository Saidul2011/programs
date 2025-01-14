#include <stdio.h>

// Function to delete an element from a specified position in an array
void deleteElement(int arr[], int size, int pos) {
    // Check if the position is valid
    if (pos >= size || pos < 0) {
        printf("Invalid position! Please enter position between 0 and %d\n", size - 1);
        return;
    }
    
    // Shift elements to the left from the specified position
    for (int i = pos; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array
    size--;

    // Print the array after deletion
    printf("Array after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], size, pos;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input elements of the array
    printf("Enter %d elements in the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position of the element to be deleted
    printf("Enter the position of the element to be deleted: ");
    scanf("%d", &pos);

    // Call the function to delete the element
    deleteElement(arr, size, pos);

    return 0;
}
