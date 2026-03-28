// write a menu driven program to perform various string operations.(using switch case)
#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    char s1[100], s2[100], temp[200];

    do {
        printf("\n===== STRING OPERATIONS MENU =====\n");
        printf("1. Length\n");
        printf("2. Copy\n");
        printf("3. Concatenate\n");
        printf("4. Compare\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter string: ");
                scanf("%s", s1);
                printf("Length = %zu\n", strlen(s1));
                break;

            case 2:
                printf("Enter source string: ");
                scanf("%s", s1);
                strcpy(temp, s1);
                printf("Copied string = %s\n", temp);
                break;

            case 3:
                printf("Enter first string: ");
                scanf("%s", s1);
                printf("Enter second string: ");
                scanf("%s", s2);
                strcpy(temp, s1);
                strcat(temp, s2);
                printf("Concatenated = %s\n", temp);
                break;

            case 4:
                printf("Enter first string: ");
                scanf("%s", s1);
                printf("Enter second string: ");
                scanf("%s", s2);
                int result = strcmp(s1, s2);
                if (result == 0)
                    printf("Strings are EQUAL\n");
                else if (result > 0)
                    printf("String 1 is GREATER\n");
                else
                    printf("String 2 is GREATER\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 5);

    return 0;
}