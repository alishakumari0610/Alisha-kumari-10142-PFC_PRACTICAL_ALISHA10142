// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int main() {
    int height;
    printf("Input height: ");
    scanf("%d", &height);

    // Top Inverted Part
    for (int r = height; r >= 1; r--) {
        for (int c = 1; c <= height - r; c++) {
            printf(" ");
        }
        for (int c = 1; c <= 2 * r - 1; c++) {
            printf("*");
        }
        printf("\n");
    }

    // Bottom Pyramid Part
    for (int r = 2; r <= height; r++) {
        for (int c = 1; c <= height - r; c++) {
            printf(" ");
        }
        for (int c = 1; c <= 2 * r - 1; c++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

// Output :
// Input height: 5
// *********
//  *******
//   *****
//    ***
//     *
//    ***
//   *****
//  *******
// *********