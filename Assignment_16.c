// This program will accept list of N intergers and partition list into two sub lists even and odd numbers.
#include <stdio.h>

int main() {
    int n, i, even_count = 0, odd_count = 0;

    // 1. Get the number of elements
    printf("Enter the number of elements (N): ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];

    // 2. Accept list of N integers
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Partition into even and odd sub-lists
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[even_count++] = arr[i];
        } else {
            odd[odd_count++] = arr[i];
        }
    }

    // 4. Display the partitioned lists
    printf("\nEven numbers: ");
    for (i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }

    printf("\nOdd numbers: ");
    for (i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}
