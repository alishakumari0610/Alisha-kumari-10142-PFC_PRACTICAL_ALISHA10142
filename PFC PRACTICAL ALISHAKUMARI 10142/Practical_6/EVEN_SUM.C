// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int main() {
    int maxNum, totalVal = 0;
    printf("Enter limit number: ");
    scanf("%d", &maxNum);

    for (int j = 1; j <= maxNum; j++) {
        if (j % 2 != 0) {
            continue;
        }
        totalVal += j;
    }
    printf("Total of even numbers up to %d is %d\n", maxNum, totalVal);
    return 0;
}

// Output :
// Enter limit number: 10
// Total of even numbers up to 10 is 30