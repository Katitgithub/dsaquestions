#include <stdio.h>

void print_fibonacci(int n) {
    int a = 0, b = 1, next;

    for (int i = 0; i < n; i++) {
        if (i == 0) {
            printf("%d ", a);
        } else if (i == 1) {
            printf("%d ", b);
        } else {
            next = a + b;
            a = b;
            b = next;
            printf("%d ", next);
        }
    }
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        print_fibonacci(n);
    }

    return 0;
}
