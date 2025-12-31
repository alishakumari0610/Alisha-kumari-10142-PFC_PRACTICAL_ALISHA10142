// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int main() {
    int values[5] = {45, 12, 89, 7, 33};
    int highest, lowest, k;

    highest = values[0];
    lowest = values[0];

    for (k = 1; k < 5; k++) {
        if (values[k] > highest) {
            highest = values[k];
        }
        if (values[k] < lowest) {
            lowest = values[k];
        }
    }

    printf("Largest Value: %d\n", highest);
    printf("Smallest Value: %d\n", lowest);

    return 0;
}

// Output :-
// Largest Value: 89
// Smallest Value: 7