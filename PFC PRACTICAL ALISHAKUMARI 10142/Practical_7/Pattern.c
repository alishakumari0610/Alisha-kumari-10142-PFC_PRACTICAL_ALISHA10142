// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int main() {
    int limit;
    printf("Enter row limit: ");
    scanf("%d", &limit);

    for (int x = 1; x <= limit; x++) {     
        for (char letter = 'A'; letter < 'A' + x; letter++) {
            printf("%c", letter);
        }
        printf("\n"); 
    }
    return 0;
}

// Output :
// Enter row limit: 4
// A
// AB
// ABC
// ABCD