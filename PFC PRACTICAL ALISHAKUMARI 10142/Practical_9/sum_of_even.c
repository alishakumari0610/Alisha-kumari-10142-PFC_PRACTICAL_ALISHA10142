// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int main() {
    int list[5] = {2, 7, 4, 9, 6};
    int totalEven = 0;

    for (int j = 0; j < 5; j++) {
        if (list[j] % 2 == 0) {
            totalEven += list[j];
        }
    }

    printf("Total sum of even numbers: %d\n", totalEven);

    return 0;
}
// Output :-
// Total sum of even numbers: 12