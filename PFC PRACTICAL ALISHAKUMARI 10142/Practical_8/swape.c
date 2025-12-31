// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

void exchangeValues(int *p1, int *p2) {
    int hold;
    hold = *p1;   
    *p1 = *p2;     
    *p2 = hold;   
}

int main() {
    int num1, num2;
    printf("Type two values: ");
    scanf("%d %d", &num1, &num2);

    printf("Original: num1 = %d, num2 = %d\n", num1, num2);
    exchangeValues(&num1, &num2);
    printf("Swapped:  num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}

// Output :
// Type two values: 2 3 
// Original: num1 = 2, num2 = 3
// Swapped:  num1 = 3, num2 = 2