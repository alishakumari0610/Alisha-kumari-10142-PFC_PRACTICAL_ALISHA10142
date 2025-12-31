// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int calcDigitSum(int val) {
    int total = 0;

    while (val > 0) {
        int rem = val % 10;
        total += rem;    
        val /= 10;
    }
    return total;
}

int main() {
    int inputNum;
    printf("Input integer: ");
    scanf("%d", &inputNum);
    
    int finalSum = calcDigitSum(inputNum);
    printf("The sum of digits in %d is %d\n", inputNum, finalSum);
    return 0;
}

// Output :
// Input integer: 123
// The sum of digits in 123 is 6