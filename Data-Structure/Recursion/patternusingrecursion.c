#include <stdio.h>

void print_pyramid(int n, int i, int j) {
    if (i > n) {
        return;
    }
    if (j > n-i) {
        printf("*");
    } else {
        printf(" ");
    }
    if (j == 2*i-1) {
        printf("\n");
        print_pyramid(n, i+1, 1);
    } else {
        print_pyramid(n, i, j+1);
    }
}

void main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    print_pyramid(n, 1, 1);
}
