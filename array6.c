/*Q6. Write a c program to store N elements in 1 D array then check whether the given sequence of elements is in AP with one missing term if there is a missing tem print the series including the missing term .
Ex. 1, 2, 4,5,6,7 in AP with one missing term  5*/
#include <stdio.h>
 
int isAPWithMissingTerm(int arr[], int size, int *missingTerm) {
    // If the array has fewer than 3 elements, it's automatically an AP
    if (size < 3) {
        return 1;
    }
 
    // Calculate the common difference
    int commonDiff = arr[1] - arr[0];
 
    // Check if the remaining elements form an AP
    for (int i = 2; i < size; i++) {
        if (arr[i] - arr[i - 1] != commonDiff) {
            *missingTerm = arr[i - 1] + commonDiff;
            return 0; // Not in AP
        }
    }
 
    return 1; // In AP
}
 
int main() {
    int N, i, missingTerm;
 
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);
 
    // Declare an array of size N
    int arr[N];
 
    // Input N elements into the array
    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
 
    // Check whether the given sequence is in AP with one missing term or not
    if (isAPWithMissingTerm(arr, N, &missingTerm)) {
        printf("The given sequence is in AP.\n");
    } else {
        printf("The given sequence is NOT in AP with one missing term.\n");
        printf("Missing term: %d\n", missingTerm);
        printf("Series including the missing term:\n");
 
        // Print the series including the missing term
        for (i = 0; i < N - 1; i++) {
            printf("%d, ", arr[i]);
            if (arr[i + 1] - arr[i] != arr[1] - arr[0]) {
                printf("%d, ", missingTerm);
            }
        }
        printf("%d\n", arr[N - 1]);
    }
 
    return 0;
}
