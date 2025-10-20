#include <stdio.h>
int main() {
    int choice = 0, number;

    while (1) {
        printf("\n=== NUMBER CHECK MENU ===\n");
        printf("1) Armstrong Number\n");
        printf("2) Adams Number\n");
        printf("3) Prime Palindrome\n");
        printf("4) Exit\n");
        printf("Enter option: ");
        scanf("%d", &choice);

        if (choice == 4) break;

        printf("Enter a number: ");
        scanf("%d", &number);

        switch (choice) {
            case 1:
                if (checkArmstrong(number))
                    printf("%d is an Armstrong number.\n", number);
                else
                    printf("%d is NOT an Armstrong number.\n", number);
                break;
            case 2:
                if (checkAdams(number))
                    printf("%d is an Adams number.\n", number);
                else
                    printf("%d is NOT an Adams number.\n", number);
                break;
            case 3:
                if (checkPrimePalindrome(number))
                    printf("%d is a Prime Palindrome.\n", number);
                else
                    printf("%d is NOT a Prime Palindrome.\n", number);
                break;
            default:
                printf("Invalid option! Please choose 1-4.\n");
        }
    }

    printf("Program terminated. Bye!\n");
    return 0;
}
