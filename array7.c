/*Q7. Write a c program to store N elements in 1 D array (including positive ,negative values) , then
 Separate all positive and negative elements at the either side of the array, without altering the
 Original sequence of elements.
Ex. Input: -1, 2, -4, -3, 5, 6,  7, -10, -9, 33
Output:	     -1, -4, -3, -10,  -9,  2, 5, 6, 7 ,33*/
#include <stdio.h>

void separatePositiveNegative(int arr[], int n)
{
    int positive[n], negative[n];
    int posIndex = 0, negIndex = 0;

    // Separate positive and negative elements
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            negative[negIndex++] = arr[i];
        }
        else
        {
            positive[posIndex++] = arr[i];
        }
    }

    // Copy negative elements followed by positive elements back to the original array
    for (int i = 0; i < negIndex; i++)
    {
        arr[i] = negative[i];
    }
    for (int i = 0; i < posIndex; i++)
    {
        arr[negIndex + i] = positive[i];
    }
}

int main()
{
    int N;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int elements[N];

    // Input elements
    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &elements[i]);
    }

    // Separate positive and negative elements
    separatePositiveNegative(elements, N);

    // Display the output
    printf("Output:\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d ", elements[i]);
    }

    return 0;
}
