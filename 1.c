#include <stdio.h>

#define SIZE 9

// Function to check if all rows are valid
int check_rows(int grid[SIZE][SIZE]) {
    for (int r = 0; r < SIZE; r++) {
        int seen[SIZE + 1] = {0};
        for (int c = 0; c < SIZE; c++) {
            int num = grid[r][c];
            if (num < 1 || num > 9 || seen[num])
                return 0;
            seen[num] = 1;
        }
    }
    return 1;
}

// Function to check if all columns are valid
int check_columns(int grid[SIZE][SIZE]) {
    for (int c = 0; c < SIZE; c++) {
        int seen[SIZE + 1] = {0};
        for (int r = 0; r < SIZE; r++) {
            int num = grid[r][c];
            if (num < 1 || num > 9 || seen[num])
                return 0;
            seen[num] = 1;
        }
    }
    return 1;
}

// Function to check all 3x3 subgrids
int check_subgrids(int grid[SIZE][SIZE]) {
    for (int startRow = 0; startRow < SIZE; startRow += 3) {
        for (int startCol = 0; startCol < SIZE; startCol += 3) {
            int seen[SIZE + 1] = {0};
            for (int r = startRow; r < startRow + 3; r++) {
                for (int c = startCol; c < startCol + 3; c++) {
                    int num = grid[r][c];
                    if (num < 1 || num > 9 || seen[num])
                        return 0;
                    seen[num] = 1;
                }
            }
        }
    }
    return 1;
}

int main() {
    int sudoku[SIZE][SIZE] = {
        {5,3,4,6,7,8,9,1,2},
        {6,7,2,1,9,5,3,4,8},
        {1,9,8,3,4,2,5,6,7},
        {8,5,9,7,6,1,4,2,3},
        {4,2,6,8,5,3,7,9,1},
        {7,1,3,9,2,4,8,5,6},
        {9,6,1,5,3,7,2,8,4},
        {2,8,7,4,1,9,6,3,5},
        {3,4,5,2,8,6,1,7,9}
    };

    int validRows = check_rows(sudoku);
    int validCols = check_columns(sudoku);
    int validBoxes = check_subgrids(sudoku);

    if (validRows && validCols && validBoxes)
        printf("VALID SOLUTION\n");
    else
        printf("INVALID SOLUTION\n");

    return 0;
}
