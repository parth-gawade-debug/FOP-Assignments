#include <stdio.h>

// ───── ADDITION ─────
void addition() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[10][10], b[10][10], res[10][10];

    printf("Enter matrix A:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter matrix B:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            res[i][j] = a[i][j] + b[i][j];

    printf("Result:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%4d ", res[i][j]);
        printf("\n");
    }
}

// ───── SADDLE POINT ─────
void saddlePoint() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[10][10];
    printf("Enter matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int found = 0;
    for (int i = 0; i < n; i++) {
        // find min in row i
        int minVal = a[i][0], minCol = 0;
        for (int j = 1; j < n; j++) {
            if (a[i][j] < minVal) {
                minVal = a[i][j];
                minCol = j;
            }
        }
        // check if minVal is max in its column
        int isMax = 1;
        for (int k = 0; k < n; k++) {
            if (a[k][minCol] > minVal) {
                isMax = 0;
                break;
            }
        }
        if (isMax) {
            printf("Saddle point found: %d at position (%d, %d)\n", minVal, i, minCol);
            found = 1;
        }
    }
    if (!found)
        printf("No saddle point found.\n");
}

// ───── INVERSE (2x2 only) ─────
void inverse() {
    float a[2][2];
    printf("Enter 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%f", &a[i][j]);

    float det = a[0][0] * a[1][1] - a[0][1] * a[1][0];

    if (det == 0) {
        printf("Inverse does not exist (determinant = 0).\n");
        return;
    }

    float inv[2][2];
    inv[0][0] =  a[1][1] / det;
    inv[0][1] = -a[0][1] / det;
    inv[1][0] = -a[1][0] / det;
    inv[1][1] =  a[0][0] / det;

    printf("Inverse matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%8.3f ", inv[i][j]);
        printf("\n");
    }
}

// ───── MAGIC SQUARE ─────
// Generates odd-order magic square using Siamese method
void magicSquare() {
    int n;
    printf("Enter odd number for magic square: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("Only odd order supported.\n");
        return;
    }

    int a[10][10] = {0};
    int row = 0, col = n / 2;

    for (int num = 1; num <= n * n; num++) {
        a[row][col] = num;
        int newRow = (row - 1 + n) % n;
        int newCol = (col + 1) % n;
        if (a[newRow][newCol] != 0) {
            row = (row + 1) % n;
        } else {
            row = newRow;
            col = newCol;
        }
    }

    int magicSum = n * (n * n + 1) / 2;
    printf("Magic Square (Magic Sum = %d):\n", magicSum);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%4d ", a[i][j]);
        printf("\n");
    }
}

// ───── MAIN MENU ─────
int main() {
    int choice;

    do {
        printf("\n===== MATRIX OPERATIONS MENU =====\n");
        printf("1. Addition\n");
        printf("2. Saddle Point\n");
        printf("3. Inverse (2x2)\n");
        printf("4. Magic Square\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addition();    break;
            case 2: saddlePoint(); break;
            case 3: inverse();     break;
            case 4: magicSquare(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}

