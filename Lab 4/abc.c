#include <stdio.h>

int main() {
    int num1, num2, result;
    char operator;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    // Clear the input buffer before reading a character
    while ((getchar()) != '\n'); // Discard any leftover newline character

    printf("Enter the operator (+,-,/,*): ");
    scanf("%c", &operator);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("The addition of first and second number is: %d\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("The subtraction of first and second number is: %d\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("The multiplication of first and second number is: %d\n", result);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                result = num1 / num2;
                printf("The division of first and second number is: %d\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator, Please enter a valid operator\n");
    }

    return 0;
}
