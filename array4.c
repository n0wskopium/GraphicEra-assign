/*Q4 Write a c program to store N elements in 1 D array then count frequency of each element in the array.
#include <stdio.h>*/
void countFrequency(int arr[], int size)
{
    int i, j, count;

    // Initialize an array to store frequencies, initially all set to -1
    int freq[size];

    for (i = 0; i < size; i++)
    {
        freq[i] = -1;
    }

    // Count frequency of each element
    for (i = 0; i < size; i++)
    {
        count = 1;
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                // To avoid counting the same element again
                freq[j] = 0;
            }
        }

        // If frequency is not counted yet
        if (freq[i] != 0)
        {
            freq[i] = count;
        }
    }

    // Display the frequency of each element
    printf("\nElement   Frequency\n");
    for (i = 0; i < size; i++)
    {
        if (freq[i] != 0)
        {
            printf("%4d   %9d\n", arr[i], freq[i]);
        }
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

    // Count and display the frequency of each element
    countFrequency(arr, N);

    return 0;
}
