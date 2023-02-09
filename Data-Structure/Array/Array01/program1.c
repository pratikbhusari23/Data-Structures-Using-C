// count tthe number of elements that have atleast 1 element greater than it
// input = 3 1 2
// output = 2
// input = 5 5 3
// output = 1

#include <stdio.h>

int countElements(int arr[], int n) {
    int count = 0;
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (arr[i] < arr[j]) {
                count++;
                break;
            }
        }
    }
    return count;
}

int main() {
    int arr[] = {5,5,5,2,2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("The number of elements that have at least one element greater than them is: %d\n", countElements(arr, n));
    return 0;
}
