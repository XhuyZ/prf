#include <stdio.h>

int main() {
    int a, b, sum = 0;

    printf("Enter two integers (a < b): ");
    scanf("%d %d", &a, &b);

    for (int i = a + 1; i < b; i++) {
        if (i % 2 != 0) { // Check if 'i' is odd
            sum += i;
        }
    }

    printf("OUTPUT:\n");
    printf("%d\n", sum);

    return 0;
}
