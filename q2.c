#include <stdio.h>

int main() {
    int numbers[5];
    int oddCount = 0;

    // Read five integers from the keyboard
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Count the number of odd numbers
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 != 0) {
            oddCount++;
        }
    }

    // Print the number of odd numbers
    printf("OUTPUT:\n");
    printf("%d\n", oddCount);

    printf("Press any key to continue . . .");
    getchar(); // Wait for a key press
    getchar(); // Consume the newline character

    return 0;
}
