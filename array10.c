/*.  Write a c program to store N sorted sequence of elements in 2 , 2 D arrays say A and  B then merge them and store in 3rd 2-D arrays finally display the sorted array(i.e 3rd   2-D).
Ex. A= 1,3,5,7,9,11
        B= 2, 4, 6, 8, 10, 12, 14
Output C= 1,2,3,4,5,6,7,8,9,10,11,12,14
*/
#include <stdio.h>

// Function to merge two sorted arrays into a third sorted array
void mergeArrays(int arr1[][2], int arr2[][2], int m, int n) {
    int mergedArray[m + n][2];
    int i = 0, j = 0, k = 0;

    // Merge elements from arrays arr1 and arr2 into mergedArray
    while (i < m && j < n) {
        if (arr1[i][0] < arr2[j][0] || (arr1[i][0] == arr2[j][0] && arr1[i][1] < arr2[j][1])) {
            mergedArray[k][0] = arr1[i][0];
            mergedArray[k][1] = arr1[i][1];
            i++;
        } else {
            mergedArray[k][0] = arr2[j][0];
            mergedArray[k][1] = arr2[j][1];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of arr1, if any
    while (i < m) {
        mergedArray[k][0] = arr1[i][0];
        mergedArray[k][1] = arr1[i][1];
        i++;
        k++;
    }

    // Copy the remaining elements of arr2, if any
    while (j < n) {
        mergedArray[k][0] = arr2[j][0];
        mergedArray[k][1] = arr2[j][1];
        j++;
        k++;
    }

    // Print the sorted merged array
    printf("Merged and sorted array C:\n");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", mergedArray[i][0]);
    }
    printf("\n");
}

int main() {
    int m, n;

    // Input size of arrays A and B
    printf("Enter the size of array A: ");
    scanf("%d", &m);
    printf("Enter the size of array B: ");
    scanf("%d", &n);

    int arrA[m][2], arrB[n][2];

    // Input elements of array A
    printf("Enter the elements of array A:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arrA[i][j]);
        }
    }

    // Input elements of array B
    printf("Enter the elements of array B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arrB[i][j]);
        }
    }

    // Merge arrays A and B and store the result in array C
    mergeArrays(arrA, arrB, m, n);

    return 0;
}
