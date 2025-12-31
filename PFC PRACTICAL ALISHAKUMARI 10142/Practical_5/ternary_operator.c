// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int main() {
    int x, y, maxVal;
    printf("Enter two values: ");
    scanf("%d %d", &x, &y);

    maxVal = (x > y) ? x : y;

    printf("The maximum value is %d\n", maxVal);

    return 0;
}
// Output:
// Enter two values: 15 8
// The maximum value is 15