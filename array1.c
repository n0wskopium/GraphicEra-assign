// Write a c program to store N elements in 1 D array then count and print total even and odd elements in the array.
#include <stdio.h>
int main()
{
    int N, i, evenCount = 0, oddCount = 0;
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

    // Count even and odd elements
    for (i = 0; i < N; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    // Print the results
    printf("\nTotal even elements: %d\n", evenCount);
    printf("Total odd elements: %d\n", oddCount);
    return 0;
}
