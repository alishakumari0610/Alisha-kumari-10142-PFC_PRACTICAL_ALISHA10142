// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int idx;

    printf("Forward Order: ");
    for (idx = 0; idx < 5; idx++) {
        printf("%d  ", numbers[idx]);
    }

    printf("\nBackward Order: ");
    for (idx = 4; idx >= 0; idx--) {
        printf("%d  ", numbers[idx]);
    }
    printf("\n");

    return 0;
}

// Output :- 
// Forward Order: 10  20  30  40  50  
// Backward Order: 50  40  30  20  10