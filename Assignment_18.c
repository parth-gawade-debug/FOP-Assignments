// this program uses some sstring functions to manipulate strings
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include<stdlib.h>
#include<math.h>

int main() {
    char str1[50],str2[50],temp[50];
    int i,n,isPalindrome = 1;
    printf("Enter first string: ");
    gets("%s", str1);
    printf("Enter second string: ");
    gets("%s", str2);
    int length = 0;
    while(str1[length] != '\0') {
        length++;
    }
    printf("Length of first string: %d\n", length);
    printf("%d\n", strcmp(str1, str2));
    if(strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    char *myPtr = strstr(str1, "good");
if (myPtr != NULL) {
  printf("%s", myPtr);
}
n=length;
 for (i = 0; i < n / 2; i++) {
        if (str1[i] != str1[n - 1 - i]) {
            isPalindrome = 0;
            break;
        }
    }

    printf("%s is %s palindrome\n", str1, isPalindrome ? "a" : "not a");

return 0;
}
