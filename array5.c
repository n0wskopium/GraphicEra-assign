/*Q5. Write a c program to store N elements in 1 D array then check whether the given sequence of elements is in AP or not.*/
// Ex1 .1, 2, 3, 4, 5, 6, 7 in AP.Ex2 .1, 2, 3, 4, 5, 6, 8, 11 not in AP.
#include <stdio.h>
int isAP(int arr[], int size)
{
    // If the array has fewer than 3 elements, it's automatically an AP
    if (size < 3)
    {
        return 1;
    }

    // Calculate the common difference
    int commonDiff = arr[1] - arr[0];

    // Check if the remaining elements form an AP
    for (int i = 2; i < size; i++)
    {
        if (arr[i] - arr[i - 1] != commonDiff)
        {
            return 0; // Not in AP
        }
    }

    return 1; // In AP
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

    // Check whether the given sequence is in AP or not
    if (isAP(arr, N))
    {
        printf("The given sequence is in AP.\n");
    }
    else
    {
        printf("The given sequence is NOT in AP.\n");
    }

    return 0;
}
