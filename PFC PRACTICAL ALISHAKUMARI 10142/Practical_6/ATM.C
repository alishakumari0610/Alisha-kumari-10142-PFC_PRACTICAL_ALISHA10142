// Name :- Alisha Singh
// ERP :- RU-25-10142
#include <stdio.h>

int main() {
    int secretCode = 1234;
    int userPin;
    int count = 0;
    int limit = 3;

    while (count < limit) {
        printf("Please enter PIN: ");
        scanf("%d", &userPin);

        if (userPin == secretCode) {
            printf("Login Successful. Welcome!\n");
            return 0;  
        } else {
            printf("Wrong PIN. Please try again.\n");
            count++;
        }
    }
    printf("Maximum attempts reached. Card blocked.\n");
    return 0;
}

// Output :
// Please enter PIN: 1234
// Login Successful. Welcome!