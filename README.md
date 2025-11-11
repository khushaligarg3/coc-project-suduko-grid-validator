# coc-project-suduko-grid-validator
PROJECT TITLE & DESCRIPTION:
The Sudoku Grid Validator is a C program designed to check whether a given 9×9 Sudoku puzzle is valid according to the standard Sudoku rules.
It ensures that each row, column, and 3×3 sub-grid contains all digits from 1 to 9 without repetition.
This project demonstrates logical problem solving, nested loops, and data structure manipulation using arrays.
CONCEPTS USED:
2D Arrays – To store the 9×9 Sudoku grid.

Nested Loops – To iterate through rows, columns, and 3×3 subgrids.

Functions – For modular code (e.g., separate checking functions).

if–else Statements – For logical condition checking.

Pointers – To pass arrays (grids) between functions efficiently.

Mathematical Logic – To verify the validity of Sudoku rules.
HOW TO COMPILE IT:
Use any C compiler such as GCC or an IDE like Code::Blocks / Dev-C++.

HOW TO RUN:
Once compiled, run the executable:

On Windows:
sudoku_validator.exe

On Linux/Mac:
./sudoku_validator


The program will:

Take a 9×9 Sudoku grid as input (either from the user or a predefined array).

Validate all rows, columns, and sub-grids.

Display whether the Sudoku solution is VALID or INVALID.

