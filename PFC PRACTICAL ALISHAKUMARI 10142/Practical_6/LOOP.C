// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int main() {
    int startVal, endVal;
    
    printf("Input starting integer: ");
    scanf("%d", &startVal);
    
    printf("Input ending integer: ");
    scanf("%d", &endVal);

    for(int k = startVal; k <= endVal; k++) {
        printf("%d\n", k);
    }
    return 0;
}
// Output :
// Input starting integer: 1
// Input ending integer: 5
// 1
// 2
// 3
// 4
// 5