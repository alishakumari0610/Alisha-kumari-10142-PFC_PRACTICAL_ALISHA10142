// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int main() {
    char operator;
    float numA, numB;

    printf("Choose operation (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%f %f", &numA, &numB);

    switch (operator) {
        case '+':
            printf("Result: %.2f\n", numA + numB);
            break;
        case '-':
            printf("Result: %.2f\n", numA - numB);
            break;
        case '*':
            printf("Result: %.2f\n", numA * numB);
            break;
        case '/':
            if (numB != 0)
                printf("Result: %.2f\n", numA / numB);
            else
                printf("Error: Division by zero.\n");
            break;
        default:
            printf("Invalid operator selected.\n");
    }

    return 0;
}
// Output:
// Choose operation (+, -, *, /): *
// Enter two operands: 5 4
// Result: 20.00