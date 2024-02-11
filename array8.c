/*Q8 . Write a c program to store N elements in 2 , 1 D arrays say A and  B then find and store
Union  of the given arrays.
Intersection of the given arrays.*/
#include <stdio.h>

void separatePositiveNegative(int arr[], int size)
{
    int positive[size], negative[size];
    int posCount = 0, negCount = 0;

    // Separate positive and negative elements
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            negative[negCount++] = arr[i];
        }
        else
        {
            positive[posCount++] = arr[i];
        }
    }

    // Copy negative elements first, then positive elements back to the original array
    for (int i = 0; i < negCount; i++)
    {
        arr[i] = negative[i];
    }

    for (int i = 0; i < posCount; i++)
    {
        arr[negCount + i] = positive[i];
    }
}

int main()
{
    int N;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    // Declare an array of size N
    int arr[N];

    // Input N elements into the array
    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Separate positive and negative elements without altering the original sequence
    separatePositiveNegative(arr, N);

    // Display the separated array
    printf("\nSeparated array:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
