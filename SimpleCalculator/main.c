#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b) {
    int sum = a + b;
    return sum;
}

int subtraction(int a, int b) {
    int diff = a - b;
    return diff;
}

int multiplication(int a, int b) {
    int prod = a * b;
    return prod;
}

float division(int a, int b) {
    float quot = (float) a / b;
    return quot;
}

int rem(int a, int b) {
    int rem = a % b;
    return rem;
}

int main() {
    int a, b;
    char operation;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Enter operator: ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            printf("%d + %d = %d", a, b, addition(a, b));
            break;
        case '-':
            printf("%d - %d = %d", a, b, subtraction(a, b));
            break;
        case '*':
            printf("%d * %d = %d", a, b, multiplication(a, b));
            break;
        case '/':
            printf("%d / %d = %.2f", a, b, division(a, b));
            break;
        case '%':
            printf("%d %% %d = %d", a, b, rem(a, b));
            break;
        default:
            printf("Invalid operator");
            break;
    }

    return 0;
}
