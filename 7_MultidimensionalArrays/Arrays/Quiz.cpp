#include<iostream>
using namespace std;

int mainQ1() {
	const int ROWS = 2;
	const int COLS = 3;

	double grades[ROWS][COLS] {
		{ 1, 2, 3 },
		{ 6, 5, 4 }
	};

	double avg = 0;
	for (int row = 0; row <  ROWS; ++row)
		for (int col = 0; col < COLS; ++col)
			avg += grades[row][col];

	cout << avg / (ROWS * COLS);
	return 0;
}

int mainQ2() {
	const int ROWS = 2;
	const int COLS = 3;

	double grades[ROWS][COLS] {
		{ 1, 2, 3 },
		{ 6, 5, 4 }
	};

	cout << grades[1][1];
	return 0;
}

//How many elements in this array?

int mainQ3() {
	double grades[2][3][4][10][10];
	cout<<sizeof(grades)/sizeof(double)<<endl;
	return 0;
}


int mainQ4() {
	double arr[2][3] {
		{ 1, 2, 3 },
		{ 6, 5, 4 }
	};

	int t = arr[0][0];
	arr[0][0] = arr[1][1];
	arr[1][1] = arr[0][2];
	arr[0][2] = arr[1][0];
	arr[1][0] = t;

	for (int j = 0; j < 3; ++j) {
		for (int i = 0; i < 2; ++i) {
			cout<<arr[i][j];
		}
	}
	return 0;
}


int mainQ5() {
	int arr[3][4] {
		{ 1, 2, 3, 10 },
		{ 6, 5, 4, 11 },
		{ 7, 8, 9, 12 },
	};

	int di[] {-1, 0, 1, 0};
	int dj[] {0, 1, 0, -1};

	int i = 1, j = 2;

	for (int d = 0; d < 4; ++d) {
		int ni = i + di[d];
		int nj = j + dj[d];
		cout<<arr[ni][nj]<<" ";
	}

	return 0;
}

int mainQ6() {
	int arr[3][4] {
		{0, 10, 2, 7},
		{31, 40, 5, 32},
		{11, 12, 15, 16},
	};

	cout<<arr[0][10] << " "<<arr[1][5];

	return 0;
}
