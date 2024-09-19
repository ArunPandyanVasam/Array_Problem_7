#include <stdio.h>
#define SIZE 100

int main(void) {
    // Write a program in C to merge two arrays of the same size sorted in descending order.
    int n1;
    int n2;
    int arr1[SIZE];
    int arr2[SIZE];
    int mergedArray[SIZE];

    printf("Input the number of elements to be stored in the first array: ");
    scanf("%d", &n1);
    for (int i = 0; i < n1; ++i) {
        printf("Element - %d: ", i);
        scanf("%d", &arr1[i]);
    }

    printf("Input the number of elements to be stored in the second array: ");
    scanf("%d", &n2);
    for (int i = 0; i < n2; ++i) {
        printf("Element - %d: ", i);
        scanf("%d", &arr2[i]);
    }

    printf("The merged array in descending order is: ");
    int i;
    for (i = 0; i < n1; ++i) {
        mergedArray[i] = arr1[i];
    }

    int j;
    for (j = 0; j < n2; ++j) {
        mergedArray[i] = arr2[j];
        i++;
    }

    int temp = 0;
    for (int k = 0; k < n1 + n2; ++k) {
        for (int l = 0; l < n1 + n2; ++l) {
            if (mergedArray[l] <= mergedArray[l+1]) {
                temp = mergedArray[l];
                mergedArray[l] = mergedArray[l+1];
                mergedArray[l+1] = temp;
            }
        }
    }

    for (int k = 0; k < n1 + n2; ++k) {
        printf("%d ", mergedArray[k]);
    }













    return 0;
}
