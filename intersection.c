#include <stdio.h>

void printIntersection(int arr1[], int arr2[], int n1, int n2) {
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else {
            printf("%d ", arr1[i]);
            i++;
            j++;
        }
    }
}

int main() {
    int arr1[] = {1, 3, 4, 5, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 3, 5, 6};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Intersection of the two arrays is:\n");
    printIntersection(arr1, arr2, n1, n2);
    return 0;
}
