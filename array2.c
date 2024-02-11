/*Q2. Write a c program to store N elements in 1 D array (including positive ,negative and zero) , then separate and store them in different arrays(ie. Positive ,negative and zero).*/
#include <stdio.h>
int main()
{
    int N, i, posCount = 0, negCount = 0, zeroCount = 0;
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
    // Count positive, negative, and zero elements
    for (i = 0; i < N; i++)
    {
        if (arr[i] > 0)
        {
            posCount++;
        }
        else if (arr[i] < 0)
        {
            negCount++;
        }
        else
        {
            zeroCount++;
        }
    }
    // Declare arrays to store positive, negative, and zero elements
    int posArr[posCount], negArr[negCount], zeroArr[zeroCount];
    // Separate elements into different arrays
    int posIndex = 0, negIndex = 0, zeroIndex = 0;
    for (i = 0; i < N; i++)
    {
        if (arr[i] > 0)
        {
            posArr[posIndex++] = arr[i];
        }
        else if (arr[i] < 0)
        {
            negArr[negIndex++] = arr[i];
        }
        else
        {
            zeroArr[zeroIndex++] = arr[i];
        }
    }
    // Print the separated arrays
    printf("\nPositive elements: ");
    for (i = 0; i < posCount; i++)
    {
        printf("%d ", posArr[i]);
    }
    printf("\nNegative elements: ");
    for (i = 0; i < negCount; i++)
    {
        printf("%d ", negArr[i]);
    }
    printf("\nZero elements: ");
    for (i = 0; i < zeroCount; i++)
    {
        printf("%d ", zeroArr[i]);
    }
    return 0;
}
