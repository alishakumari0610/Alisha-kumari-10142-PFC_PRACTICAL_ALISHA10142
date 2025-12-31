// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

void drawPattern(int rows) {
    for (int r = 1; r <= rows; r++) {
        for (int c = 1; c <= r; c++) {
            printf("*");
        }
        printf("\n");
    }
}

int main() {
    int limit;
    printf("Input triangle size: ");
    scanf("%d", &limit);
    drawPattern(limit);
    return 0;
}

// Output :
// Input triangle size: 5
// *
// **
// ***
// ****
// *****