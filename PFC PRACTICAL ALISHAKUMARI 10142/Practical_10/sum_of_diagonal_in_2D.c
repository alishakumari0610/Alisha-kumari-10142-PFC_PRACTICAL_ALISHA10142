// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int main() {
    int sqMatrix[3][3] = {{10, 2, 1},
                          {4, 20, 6},
                          {7, 8, 30}};
    int diagTotal = 0;
    int k;

    for (k = 0; k < 3; k++) {
        diagTotal += sqMatrix[k][k];
    }

    printf("Diagonal Sum Result: %d", diagTotal);

    return 0;
}
// Output :-
// Diagonal Sum Result: 60