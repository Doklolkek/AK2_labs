
#include <stdio.h>
#include "calculator.h"

int main() {
    int a, b;

    printf("Enter two numbers: ");

    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input\n");
        return 1;
    }

    printf("Addition: %d\n", add(a, b));
    printf("Subtraction: %d\n", subtract(a, b));
    printf("Multiplication: %d\n", multiply(a, b));

    return 0;
}
