This file contains the details about the project and how to install and run the project.


DESCRIPTION:

-This project is about the topic "Sudoku Solver".
-The programming language used is C++.
-This project takes an unsolved 9x9 grid as input with 0 in place of the blanks to be filled.
 
HOW TO SET UP VISUAL STUDIO(in my case):

-Install the visual studio (in my case) community version from the link https://visualstudio.microsoft.com/downloads/ .
 Install it with the check mark option of downloading and installing c++ dependencies in it.
 It will install its own c++ libraries and other files required.
-After the installation open it and click on new c++ project.


ABOUT THE CONTENTS IN THE PROJECT CODE:

-The main() function will take a 9x9 sudoku as input and print the answer in grid form after all the operations.
-The value of N is set as 9 as constant at the start.
-For checking the sudoku as correct or not the use of datatype which will return 0 or 1 is used.

Function: int solver(grid,row,column) -

-The grid is first passed to the function solver() with the grid and starting row and column of grid.
-The datatype is int because the function will return 0 if the sudoku is not valid.
-The function will work in a recursive manner and end when the value of row is 8 and the column is 9.
-It will increase the value of row if the column reach 9.
-Then it will check whether the value in cell of the grid is greater than 0 or not.
-If it is greater it will call the function again and increase the column.
-If it is not greater then it will assign a value from 1 to 9 in a loop and check whether the value is valid or not by passing
 it to the function valid() which will return false if it is not valid else it will return true.
-If it will not be valid then the next line will assign zero to it and backtrack it as it is written in post of recursion call.

Function: bool valid(arr,row,column,number) -

-This function will check in the row and column in the first loop whether the number can be assigned to the cell or not.
 If yes it will return true else false.
-In the second loop it will check in the sub-matrix in which the cell is present for the validation.
-For the position of first element of sub-matrix i have done (3*(row/3)) and (3*(column/3)).
-These will be added to the iteration of the sub-matrix's row and column to get correct position.


