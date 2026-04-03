// write a function to swap 2 numbers with and without pointers
#include <stdio.h>
void swap_with_pointers(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swap_without_pointers(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    swap_with_pointers(&x, &y);
    printf("After swapping with pointers: x = %d, y = %d\n", x, y);
    swap_without_pointers(x, y);
    printf("After swapping without pointers: x = %d, y = %d\n", x, y);
    return 0;
}