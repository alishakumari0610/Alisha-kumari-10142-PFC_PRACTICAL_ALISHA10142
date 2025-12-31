// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int main() {
    int data[2][3] = {{3, 3, 3},
                      {10, 20, 5}};
    int row, col, total;

    for (row = 0; row < 2; row++) {
        total = 0;
        for (col = 0; col < 3; col++) {
            total += data[row][col];
        }
        printf("Total for Row %d: %d\n", row + 1, total);
    }

    return 0;
}
// Output :-
// Total for Row 1: 9
// Total for Row 2: 35