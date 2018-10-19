#include <iostream>

int main()
{
	int row, col, entries;

	std::cout << "How many rows are in the matrix?" << std::endl;
	std::cin >> row;

	std::cout << "How many columns are in the matrix?" << std::endl;
	std::cin >> col;

	entries = row * col;
	int *matrix = new int[entries];

	std::cout << "Input matrix:" << std::endl;

	for (int i = 0; i < entries; i++) {
		std::cin >> matrix[i];
	}

	std::cout << "LaTeX formatting:\n" << std::endl;
	std::cout << "\\begin{bmatrix}" << std::endl;

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

		if (i < row - 1) {
			std::cout << " \\\\" << std::endl;
		}
		else {
			std::cout << std::endl;
		}
	}

	std::cout << "\\end{bmatrix}" << std::endl;

	delete[] matrix;

	return 0;
}