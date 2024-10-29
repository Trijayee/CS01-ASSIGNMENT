#include <stdio.h>
#include <limits.h>

void findSecondLargestSmallest(int arr[], int n) {
    int max = INT_MIN, max2 = INT_MIN;
    int min = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        
        if (arr[i] > max) {
            max2 = max;
            max = arr[i];
        } else if (arr[i] > max2 && arr[i] != max) {
            max2 = arr[i];
        }

        
        if (arr[i] < min) {
            min2 = min;
            min = arr[i];
        } else if (arr[i] < min2 && arr[i] != min) {
            min2 = arr[i];
        }
    }

    printf("Second largest element: %d\n", max2);
    printf("Second smallest element: %d\n", min2);
}

int main() {
    int arr[] = {10, 20, 4, 45, 99};
    int n = sizeof(arr) / sizeof(arr[0]);

    findSecondLargestSmallest(arr, n);

    return 0;
}