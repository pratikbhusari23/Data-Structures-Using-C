#include<stdio.h>

void range(int arr[], int size, int key, int *rangearr) {
    int start = 0, store1 = -1, store2 = -1;
    int end = size - 1;
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;
        if (arr[mid] == key) {
            if (mid > 0 && arr[mid] == arr[mid - 1]) {
                store1 = mid - 1;
                store2 = mid;
            }
            else if (mid < size - 1 && arr[mid] == arr[mid + 1]) {
                store1 = mid;
                store2 = mid + 1;
            }
            else {
                store1 = mid;
                store2 = mid;
                break;
            }
        }
        else if (arr[mid] > key) {
            end = mid - 1;
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
    }
    rangearr[0] = store1;
    rangearr[1] = store2;
}

void main() {
    int size, key;
    printf("Enter Size: ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter key to search: ");
    scanf("%d", &key);

    int rangearr[2];
    range(arr, size, key, rangearr);

    if (rangearr[0] == -1) {
        printf("Key not found\n");
    }
    else {
        printf("The key is found between indices %d and %d\n", rangearr[0], rangearr[1]);
    }
}
