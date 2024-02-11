/*Q3. Write a c program to store N elements in 1 D array then swap the content of the array and finally display the content after swapping.*/
#include <stdio.h>

void swapArray(int arr[], int size)
{
    int temp, i;

    // Swap elements in the array
    for (i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main()
{
    int N, i;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Declare an array of size N
    int arr[N];

    // Input N elements into the array
    printf("Enter %d elements:\n", N);
    for (i = 0; i < N; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the original array
    printf("\nOriginal array: ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    // Swap the content of the array
    swapArray(arr, N);

    // Display the array after swapping
    printf("\nArray after swapping: ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
