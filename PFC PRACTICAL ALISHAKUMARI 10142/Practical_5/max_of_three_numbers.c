// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int main() {
    int n1, n2, n3;
    printf("Enter three integers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 >= n2) {
        if (n1 >= n3) {
            printf("%d is the largest.\n", n1);
        } else {
            printf("%d is the largest.\n", n3);
        }
    } else {
        if (n2 >= n3) {
            printf("%d is the largest.\n", n2);
        } else {
            printf("%d is the largest.\n", n3);
        }
    }

    return 0;
}
// Output:
// Enter three integers: 10 50 20
// 50 is the largest.