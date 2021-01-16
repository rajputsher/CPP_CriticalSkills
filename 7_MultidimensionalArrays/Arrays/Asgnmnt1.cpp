#include<iostream>
using namespace std;

//Smaller row

int mainAA1() {
	// Ok to not intialize. we will read immediately
	int arr[100][100];
	int n, m ;

	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> arr[i][j];
		}
	}

	int q;
	cin >> q;

	while (q--) {
		int r1, r2;
		cin >> r1 >> r2;
		r1--;
		r2--;

		bool is_smaller = true;
		for (int j = 0; j < m; ++j) {
			if (arr[r1][j] >= arr[r2][j]) {
				is_smaller = false;
				break;
			}
		}

		if (is_smaller)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	return 0;
}


//Triangular matrix: Upper and Lower

int mainAA2() {
	int n, upper = 0, lower = 0, val;
	// No need to create matrix!
	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> val;

			if (i <= j)
				lower += val;

			if (i >= j)
				upper += val;
		}
	}

	cout << "Sum of lower triangle: "<<lower << "\n";
	cout << "Sum of upper triangle: "<< upper << "\n";

	return 0;
}

// Find Mountains
//A position is a mountain if its value >8 neighbours values
int mainAA3() {
	int arr[100][100];
	int n, m;

	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> arr[i][j];

	//{ d, r,  u,  l, ul, dr, ur, dl };
	int di[8] = { 1, 0, -1, 0, -1, 1, -1, 1 };
	int dj[8] = { 0, 1, 0, -1, -1, 1, 1, -1 };

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			bool valid_mountain = true;	// if no neighbors, will remain true!

			// check the 8 neighbors using dir array
			for (int d = 0; d < 8 && valid_mountain; ++d) {
				int ni = i + di[d];
				int nj = j + dj[d];

				if (ni < 0 || nj >= n || nj < 0 || nj >= m)
					continue;	// outside borders

				if (arr[i][j] <= arr[ni][nj]) {
					valid_mountain = false;
					break;
				}
			}

			if (valid_mountain)
            {
                cout<<"\n";
                cout << i << " " << j << "\n";
				cout<< "arr["<< i<< "]["<< j <<"]= "<< arr[i][j];
            }


		}
	}

	return 0;
}


// Tic-Tac-Toe
int mainAA4() {
	// 0 empty, 1 = x, 2 = o
	int grid[100][100] = { 0 };

	int n;
	cout<<"Enter grid dimension: ";
	cin >> n;

	/*
	 * in normal coding, we write a nested loops to verify rows, and same for columns.
	 * we also write loops to verify the diagonals, right?
	 *
	 * Here I am using direction array idea to gather all of that in a single nested loop
	 *
	 * 	for example: we have to start from (0, 0) we need to verify the whole row
	 * 	this means from (0, 0) with move (0, 1) we can cover the whole row
	 * 	and move (1, 0) we can cover the whole column
	 * 	and move (1, 1) we can cover the whole right diagonal
	 *  and so on
	 *
	 * 	for n = 3
	 * 	we want to verify 3 rows, 3 cols and right diagonal and left diagonal
	 * 	so we need 8 starting points and their move direction
	 *
	 *  The code below is listing all these starting points
	 * 		Add N starting positions for nows
	 * 		Add N starting positions for cols
	 * 		Add 2 positions for the diagonals
	 *
	 * Later in verifying, you start from a point, and keep moving till the end of the grid
	 */

	int rs[100], cs[100], dr[100], dc[100];

	int verify = 0;

	// Add row n positions to verify
	for (int r = 0; r < n; ++r)
		rs[verify] = r, cs[verify] = 0, dr[verify] = 0, dc[verify++] = 1;

	// Add col n positions to verify
	for (int c = 0; c < n; ++c)
		rs[verify] = 0, cs[verify] = c, dr[verify] = 1, dc[verify++] = 0;

	// Add diagonal 1
	rs[verify] = 0, cs[verify] = 0, dr[verify] = 1, dc[verify++] = 1;
	// Add diagonal 2
	rs[verify] = 0, cs[verify] = n - 1, dr[verify] = 1, dc[verify++] = -1;

	int turn = 0;	// 0 for x, 1 for o. Don't get confused with grid values

	int steps = 0;
	while (true) {
		if (steps == n*n) {
			cout<<"Tie\n";
			break;
		}
		char symbol = 'x';
		if (turn == 1)
			symbol = 'o';

		cout << "Player " << symbol << " turn. Enter empty location (r, c): ";
		int r, c;
		cin >> r >> c;

		r -= 1, c -= 1;

		if (r < 0 || r >= n || c < 0 || c >= n || grid[r][c] != 0) {
			cout << "Invalid input. Try again\n";
			continue;
		}
		grid[r][c] = turn + 1;

		// print the grid
		for (int r = 0; r < n; ++r) {
			for (int c = 0; c < n; ++c) {
				char ch = '.';
				if (grid[r][c] == 1)
					ch = 'x';
				else if (grid[r][c] == 2)
					ch = 'o';
				cout << ch;
			}
			cout << "\n";
		}

		// Check win status
		for (int check = 0; check < verify; ++check) {
			int r = rs[check], c = cs[check], rd = dr[check], cd = dc[check];
			int cnt = 0, first = grid[r][c];

			if (first == 0)
				continue;

			for (int step = 0; step < n; ++step, r += rd, c += cd)
				cnt += grid[r][c] == first;

			if (cnt == n) {
				cout << "Player " << symbol << " won\n";
				return 0;
			}
		}

		turn = !turn;	// 0 be 1, 1 be 0 = flip player
		steps++;
	}

	return 0;
}


//Flatten 3D Array


int mainAA5() {

	if (false) {
		int idx = 0;
		for (int dep = 0; dep < 3; ++dep)
			for (int row = 0; row < 4; ++row)
				for (int col = 0; col < 5; ++col)
					cout << idx++ << " = " << dep << " " << row << " " << col
							<< "\n";
	}

	int D, R, C, type;
	int d, r, c, idx;

	cin >> D >> R >> C >> type;

	int Db = R * C;
	int Rb = C;

	if (type == 1) {
		cin >> d >> r >> c;
		idx = d * Db + r * Rb + c * 1;
		cout << idx << "\n";
	} else {
		cin>>idx;

		// r * Rb + c * 1 < Db
		d = idx / Db;

		// Remove d part, then extract r
		r = (idx % Db) / Rb;

		c = (idx % Db) % Rb;

		cout << d << " " << r << " " << c << "\n";
	}

	return 0;
}

// Transpose a Matrix
int mainAA6() {
	int arr1[100][100];
	int arr2[100][100];
	int n, m;

	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			cin >> arr1[i][j];

	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			arr2[j][i] = arr1[i][j];

	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < n; ++j)
			cout << arr2[i][j] << " ";
		cout << "\n";
	}

	return 0;
}


//Active Robot

int mainAA7() {
	int n, m, k, r = 0, c = 0;

	cin >> n >> m >> k;

	// Direction from 1 to 4: up, right, down, left
	int rd[4] = { -1, 0, 1, 0 };
	int cd[4] = { 0, 1, 0, -1 };

	while (k--) {
		int dir, steps;
		cin >> dir >> steps;
		--dir;

		r = (r + rd[dir] * steps) % n;
		c = (c + cd[dir] * steps) % m;

		if (r < 0)
			r += n;
		if (c < 0)
			c += m;

		cout << r << " " << c << "\n";
	}

	return 0;
}


// Find number of primes
int mainAA8() {
	bool is_prime[100][100] = { 0 };
	int n, m, val;

	cin >> n >> m;
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j) {
			cin >> val;

			// let's compute is prime once NOT with every query. Also no need for main array
			if (val <= 1)
				continue;

			is_prime[i][j] = 1;
			for (int k = 2; k < val; ++k) {
				if (val % k == 0) {
					is_prime[i][j] = 0;
					break;
				}
			}
		}

	int q, si, sj, rs, cls;
	cin >> q;

	while (q--) {
		cin >> si >> sj >> rs >> cls;
		int cnt = 0;

		for (int i = si; i <= si + rs - 1; ++i)
			for (int j = sj; j <= sj + cls - 1; ++j)
				cnt += is_prime[i][j];

		cout << cnt << "\n";
	}

	return 0;
}
