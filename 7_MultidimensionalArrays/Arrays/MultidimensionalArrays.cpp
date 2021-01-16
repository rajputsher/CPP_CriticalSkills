#include<iostream>
using namespace std;

int mainA1() {

	double grades[7][6] = {0};

	// Danny Grades
	grades[0][0] = 50, grades[0][1] = 33, grades[0][2] = 40, grades[0][3] = 30;

	// Joe Grades
	grades[1][0] = 35, grades[1][1] = 50, grades[1][2] = 40, grades[1][3] = 30;

	// And so on

	// Juli Grades
	grades[6][0] = 35, grades[6][1] = 30, grades[6][2] = 47, grades[6][3] = 16;

	return 0;
}


int mainA2() {
	double grades[7][6] = { 0 };

	// Danny Grades
	grades[0][0] = 50, grades[0][1] = 33, grades[0][2] = 40, grades[0][3] = 30;

	// Joe Grades
	grades[1][0] = 35, grades[1][1] = 50, grades[1][2] = 40, grades[1][3] = 30;

    // Juli Grades
	grades[6][0] = 35, grades[6][1] = 30, grades[6][2] = 47, grades[6][3] = 16;

	for (int row = 0; row < 7; ++row) {
		cout << "Row " << row << ": ";
		for (int col = 0; col < 4; ++col) {
			cout << grades[row][col] << " ";
		}
		cout << "\n";
	}
	return 0;
}


int mainA3() {
	double grades[7][6] = { 0 };

	for (int row = 0; row < 7; ++row)
		for (int col = 0; col < 4; ++col)
			cin >> grades[row][col];

	for (int row = 0; row < 7; ++row) {
		cout << "Row " << row << ": ";
		for (int col = 0; col < 4; ++col) {
			cout << grades[row][col] << " ";
		}
		cout << "\n";
	}
	return 0;
}

int mainA4() {
	double grades[7][6] = { 0 };

	for (int row = 0; row < 7; ++row)
		for (int col = 0; col < 4; ++col)
			cin >> grades[row][col];

	for (int row = 0; row < 7; ++row) {
		cout << "Row " << row << ": ";
		for (int col = 0; col < 4; ++col) {
			cout << grades[row][col] << " ";
		}
		cout << "\n";
	}
	return 0;
}

int mainA5() {
	double grades[7][6] = { 0 };

	for (int row = 0; row < 7; ++row)
		for (int col = 0; col < 4; ++col)
			cin >> grades[row][col];

	for (int col = 0; col < 4; ++col) {
		cout << "Col " << col << ": ";
		for (int row = 0; row < 7; ++row) {
			cout << grades[row][col] << " ";
		}
		cout << "\n";
	}
	return 0;
}

int mainA6() {
	double grades[7][6] = { 0 };

	for (int row = 0; row < 7; ++row)
		for (int col = 0; col < 4; ++col)
			cin >> grades[row][col];

	for (int row = 0; row < 7; ++row) {
		double sum = 0;
		for (int col = 0; col < 4; ++col)
			sum += grades[row][col];

		double avg = sum / 7.0;

		cout << "Student # " << row + 1
			 << " has average grade: " << avg << "\n";
	}
	return 0;
}
