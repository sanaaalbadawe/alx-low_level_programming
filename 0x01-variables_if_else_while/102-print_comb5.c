#include <stdio.h>

int main(void) {
    int num1, num2;

    for (num1 = 0; num1 <= 99; num1++) {
        for (num2 = num1; num2 <= 99; num2++) {
            // Print tens digit of num1
            putchar((num1 / 10) + '0');

            // Print ones digit of num1
            putchar((num1 % 10) + '0');

            // Print space between the numbers
            putchar(' ');

            // Print tens digit of num2
            putchar((num2 / 10) + '0');

            // Print ones digit of num2
            putchar((num2 % 10) + '0');

            // Print comma and space if num2 is not the last number
            if (num2 != 99) {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}
