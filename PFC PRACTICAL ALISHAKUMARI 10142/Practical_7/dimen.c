// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Upper Pyramid
    for (int k = 1; k <= rows; k++) {
        for (int m = 1; m <= rows - k; m++) {
            printf(" ");
        }
        for (int m = 1; m <= 2 * k - 1; m++) {
            printf("*");
        }
        printf("\n");
    }

    // Lower Inverted Pyramid
    for (int k = rows - 1; k >= 1; k--) {
        for (int m = 1; m <= rows - k; m++) {
            printf(" ");
        }
        for (int m = 1; m <= 2 * k - 1; m++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// Output :
// Enter number of rows: 5
//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *