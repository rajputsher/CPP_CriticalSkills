#include<iostream>
using namespace std;

int mainP1() {
	int arr[100][100];
	int rows, cols;
	cin >> rows >> cols;

	for (int row = 0; row < rows; ++row)
		for (int col = 0; col < cols; ++col)
			cin >> arr[row][col];

	int max_i = 0, max_j = 0;

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			if (arr[i][j] >= arr[max_i][max_j])
				max_i = i, max_j = j;
		}
	}
	cout << "Max value at position " << max_i << " " << max_j
			<< " with value = " << arr[max_i][max_j];
	return 0;
}

#include<iostream>
using namespace std;

int mainP2() {
	int arr[100][100];

	int rows, cols;
	cin >> rows >> cols;

	for (int i = 0; i < rows; ++i)
		for (int j = 0; j < cols; ++j)
			cin >> arr[i][j];

	int i = 0, j = 0;

	int left_diagonal = 0;
	while (i < rows && j < cols)
		left_diagonal += arr[i++][j++];

	int right_diagonal = 0;
	i = 0, j = cols-1;
	while (i < rows && j >= 0)
		right_diagonal += arr[i++][j--];

	int last_row = 0;
	j = 0;
	while (j < cols)
		last_row += arr[rows-1][j++];

	int last_col = 0;
	i = 0;
	while (i < rows)
		last_col += arr[i++][cols-1];

	cout << left_diagonal << " " << right_diagonal << "\n";
	cout << last_row << " " << last_col << "\n";

	return 0;
}


int mainP3() {
	int arr[100][100];

	int rows, cols;
	cin >> rows >> cols;

	for (int i = 0; i < rows; ++i)
		for (int j = 0; j < cols; ++j)
			cin >> arr[i][j];

	int c1, c2;
	cin >> c1 >> c2;

	for (int i = 0; i < rows; ++i) {
		// swap [i][c1] with [i][c2]
		int tmp = arr[i][c1];
		arr[i][c1] = arr[i][c2];
		arr[i][c2] = tmp;
	}
	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j)
			cout << arr[i][j] << " ";
		cout << "\n";
	}

	return 0;
}

//Greedy Robot

int mainP4() {
	int arr[100][100];

	int rows, cols;
	cin >> rows >> cols;

	for (int i = 0; i < rows; ++i)
		for (int j = 0; j < cols; ++j)
			cin >> arr[i][j];

	int i = 0, j = 0, sum = 0;

	while (i < rows && j < cols) {
		sum += arr[i][j];

		int next_val, best_i = -1, best_j = -1;

		// is right ok position?
		if (j + 1 < cols)
			next_val = arr[i][j + 1], best_i = i, best_j = j + 1;

		// is down ok position?
		if (i + 1 < rows) {
			if (best_i == -1 || next_val < arr[i + 1][j])
				next_val = arr[i + 1][j], best_i = i + 1, best_j = j;
		}
		// is diagonal ok position?
		if (i + 1 < rows && j + 1 < cols) {
			if (best_i == -1 || next_val < arr[i + 1][j + 1])
				next_val = arr[i + 1][j + 1], best_i = i + 1, best_j = j + 1;
		}

		if (best_i == -1)
			break;
		i = best_i, j = best_j;
	}
	cout << sum << "\n";

	return 0;
}




