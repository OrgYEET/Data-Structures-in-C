#include <stdio.h>

// Function to find the occurrence of each element in an array
void findOccurrences(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 1;
        if (arr[i] != -1) {  // Skip if the element is already counted
            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1;  // Mark the element as counted
                }
            }
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Occurrences of each element:\n");
    findOccurrences(arr, size);

    return 0;
}
