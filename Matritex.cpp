#include <iostream>

int main()
{
	// Defines variables for the number of rows, columns, and entries in a matrix
	int row, col, entries;

	// Takes user input for the number of rows in the matrix
	std::cout << "How many rows are in the matrix?" << std::endl;
	std::cin >> row;

	// Takes user input for the number of column in the matrix
	std::cout << "How many columns are in the matrix?" << std::endl;
	std::cin >> col;

	entries = row * col;

	// Dynamically allocates an array to store the entries in the matrix
	int *matrix = new int[entries];

	// Takes user input for the matrix
	std::cout << "Input matrix:" << std::endl;

	// Stores matrix entries in the array
	for (int i = 0; i < entries; i++) {
		std::cin >> matrix[i];
	}

	std::cout << "LaTeX formatting:\n" << std::endl;

	// Adds LaTex formatting
	std::cout << "\\begin{bmatrix}" << std::endl;

	// Outputs LateX formatted matrix, row by row, from left to right
	for (int i = 0; i < row; i++) {
		for (int k = 0; k < col; k++) {
			int index = i * col + k;

			if (k < col - 1) {
				std::cout << matrix[index] << " & ";
			}
			else {
				std::cout << matrix[index];
			}
		}

		// Adds a new row in the matrix for LaTeX formatting if needed
		if (i < row - 1) {
			std::cout << " \\\\" << std::endl;
		}
		else {
			std::cout << std::endl;
		}
	}

	std::cout << "\\end{bmatrix}" << std::endl;

	// Deallocates memory used from array
	delete[] matrix;

	return 0;
}