#include <stdio.h>
int main() {
    int rows;

void printPascalsTriangle(int rows) {
    int triangle[rows][rows]; // Create a 2D array to store Pascal's Triangle

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            // Compute the value using Pascal's Triangle property
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            printf("%d ", triangle[i][j]);
        }
        printf("\n"); // New line after each row
    }
}


    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    printf("Pascal's Triangle up to %d rows:\n", rows);
    printPascalsTriangle(rows);
    return 0;
}
