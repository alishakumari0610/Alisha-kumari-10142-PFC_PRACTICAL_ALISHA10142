// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int main() {
    int grid[2][2] = {{12, 5}, {8, 20}};
    int high = grid[0][0];
    int low = grid[0][0];
    int r, c;

    for (r = 0; r < 2; r++) {
        for (c = 0; c < 2; c++) {
            if (grid[r][c] > high) {
                high = grid[r][c];
            }
            if (grid[r][c] < low) {
                low = grid[r][c];
            }
        }
    }

    printf("Highest Value = %d\n", high);
    printf("Lowest Value = %d\n", low);

    return 0;
}
// Output :-
// Highest Value = 20
// Lowest Value = 5