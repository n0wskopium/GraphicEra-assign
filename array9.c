/*Q9.Write a c program to store N elements in 1 D array then find and print  4th non- repeating element in the array.
Ex. Input : 1,8,3,5,1,2,3,14,2,13,6,7,9,2.
Output:  13
Q10.Write a c program to store N elements in 1 D array then find and print  4th  repeating element in the array.
Ex. Input : 1,8,3,5,1,2,3,9,14,2,13,6,7,9,2.
Output:  9*/
#include <stdio.h>

// Function to find and print the 4th non-repeating element
void find4thNonRepeatingElement(int arr[], int size)
{
    int count, i, j;
    int nonRepeatingCount = 0;

    for (i = 0; i < size; i++)
    {
        count = 0;
        for (j = 0; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        // If the element is non-repeating
        if (count == 1)
        {
            nonRepeatingCount++;

            // If it is the 4th non-repeating element, print and break
            if (nonRepeatingCount == 4)
            {
                printf("4th non-repeating element: %d\n", arr[i]);
                break;
            }
        }
    }

    // If there are fewer than 4 non-repeating elements
    if (nonRepeatingCount < 4)
    {
        printf("There are fewer than 4 non-repeating elements in the array.\n");
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

    // Find and print the 4th non-repeating element
    find4thNonRepeatingElement(arr, N);

    return 0;
}
