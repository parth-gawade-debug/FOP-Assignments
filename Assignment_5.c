#include <stdio.h>

// ───── ADDITION ─────
// Function to add two matrices of same dimensions
void addition() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    // Declare two input matrices and one result matrix
    int a[10][10], b[10][10], res[10][10];

    // Read elements of matrix A
    printf("Enter matrix A:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    // Read elements of matrix B
    printf("Enter matrix B:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    // Add corresponding elements of A and B and store in res
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            res[i][j] = a[i][j] + b[i][j];

    // Print the result matrix
    printf("Result:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            printf("%4d ", res[i][j]);   // %4d for aligned output
        printf("\n");                     // newline after each row
    }
}

// ───── SADDLE POINT ─────
// A saddle point is an element that is the minimum in its row
// AND the maximum in its column
void saddlePoint() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int a[10][10];

    // Read the square matrix
    printf("Enter matrix:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    int found = 0;  // flag to track if saddle point exists

    for (int i = 0; i < n; i++) {

        // Step 1: Find the minimum element in row i
        int minVal = a[i][0], minCol = 0;
        for (int j = 1; j < n; j++) {
            if (a[i][j] < minVal) {
                minVal = a[i][j];
                minCol = j;   // track column of minimum
            }
        }

        // Step 2: Check if that minimum is the maximum in its column
        int isMax = 1;  // assume it is the max unless proven otherwise
        for (int k = 0; k < n; k++) {
            if (a[k][minCol] > minVal) {
                isMax = 0;  // found a larger element in the column
                break;
            }
        }

        // Step 3: If both conditions met, it's a saddle point
        if (isMax) {
            printf("Saddle point found: %d at position (%d, %d)\n", minVal, i, minCol);
            found = 1;
        }
    }

    // If no saddle point was found in any row
    if (!found)
        printf("No saddle point found.\n");
}

// ───── INVERSE (2x2 only) ─────
// Computes the inverse of a 2x2 matrix using the formula:
// inv(A) = (1/det) * [d, -b; -c, a]  where A = [a, b; c, d]
void inverse() {
    float a[2][2];
    printf("Enter 2x2 matrix:\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%f", &a[i][j]);

    // Calculate determinant: det = (a*d) - (b*c)
    float det = a[0][0] * a[1][1] - a[0][1] * a[1][0];

    // If determinant is 0, inverse doesn't exist
    if (det == 0) {
        printf("Inverse does not exist (determinant = 0).\n");
        return;
    }

    // Apply inverse formula for 2x2 matrix
    float inv[2][2];
    inv[0][0] =  a[1][1] / det;   //  d / det
    inv[0][1] = -a[0][1] / det;   // -b / det
    inv[1][0] = -a[1][0] / det;   // -c / det
    inv[1][1] =  a[0][0] / det;   //  a / det

    // Print the inverse matrix
    printf("Inverse matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++)
            printf("%8.3f ", inv[i][j]);  // 3 decimal places
        printf("\n");
    }
}

// ───── MAGIC SQUARE ─────
// Generates an odd-order magic square using the Siamese method
// Property: sum of every row, column, and diagonal is equal (magic sum)
// Magic Sum = n * (n^2 + 1) / 2
void magicSquare() {
    int n;
    printf("Enter odd number for magic square: ");
    scanf("%d", &n);

    // Only odd-order magic squares are supported here
    if (n % 2 == 0) {
        printf("Only odd order supported.\n");
        return;
    }

    int a[10][10] = {0};   // initialize all cells to 0

    // Start position: top row, middle column (Siamese method rule)
    int row = 0, col = n / 2;

    for (int num = 1; num <= n * n; num++) {
        a[row][col] = num;   // place current number

        // Move to upper-right cell (with wrap-around)
        int newRow = (row - 1 + n) % n;
        int newCol = (col + 1) % n;

        // If upper-right cell is already filled, move down instead
        if (a[newRow][newCol] != 0) {
            row = (row + 1) % n;
        } else {
            row = newRow;
            col = newCol;
        }
    }

    // Magic sum formula: n*(n^2+1)/2
    int magicSum = n * (n * n + 1) / 2;
    printf("Magic Square (Magic Sum = %d):\n", magicSum);

    // Print the magic square
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
        // Display menu options
        printf("\n===== MATRIX OPERATIONS MENU =====\n");
        printf("1. Addition\n");
        printf("2. Saddle Point\n");
        printf("3. Inverse (2x2)\n");
        printf("4. Magic Square\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        // Call appropriate function based on user choice
        switch (choice) {
            case 1: addition();    break;
            case 2: saddlePoint(); break;
            case 3: inverse();     break;
            case 4: magicSquare(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");  // handles invalid input
        }

    } while (choice != 5);  // keep looping until user chooses Exit

    return 0;
}

