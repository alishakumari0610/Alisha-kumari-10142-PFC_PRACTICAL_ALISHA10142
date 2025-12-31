// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int main() {
    int value;
    printf("Input an integer to check: ");
    scanf("%d", &value);

    if (value % 2 == 0) {
        printf("%d is an Even number.\n", value);
    } else {
        printf("%d is an Odd number.\n", value);
    }

    return 0;
}
// Output:
// Input an integer to check: 7
// 7 is an Odd number.