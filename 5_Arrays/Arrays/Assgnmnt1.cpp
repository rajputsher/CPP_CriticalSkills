#include<iostream>
using namespace std;

//Search for a number
int mainAA1() {
	int n, q, a[200];
    cout<<"How many numbers are in the array? :";
	cin >> n;
	cout<<"\nEnter the array elements: \n";
	for (int i = 0; i < n; i++)
		cin >> a[i];

    cout<<"How many searches will you do?: ";
	cin >> q;
	cout<<"\nEnter the numbers to be searched: \n";
	while (q--) {
		int num;
		cin >> num;

		int pos = -1;
		// search from the end
		for (int i = n-1; i >= 0; --i) {
			if (a[i] == num) {
				pos = i;
				break;
			}
		}
        if(pos!=-1)
            cout<<"The number "<<num<<" is in the position " << pos << "\n";
        else
            cout<<num<<" not found in the array \n";
	}
	return 0;
}

//Is  the elements in the array in increasing order?
int mainAA2() {
	const int N = 200;
	int n, a[N];

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bool increasing = 1; /** we will assume that the array is increasing at first **/
	for (int i = 1; i < n; i++) {
		if (a[i] < a[i - 1]) {
			increasing = 0;
			break;
		}
	}
	if (increasing) {
		cout << "YES\n";
	} else {
		cout << "NO\n";
	}
	return 0;
}


//Replace MinMax
int mainAA3() {

	const int N = 100;

	int n, a[N], mn = 10000, mx = -1;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] < mn) {
			mn = a[i];
		}
		if (a[i] > mx) {
			mx = a[i];
		}
	}

	for (int i = 0; i < n; i++) {
		if (a[i] == mn)
			a[i] = mx;
		else if (a[i] == mx)
			a[i] = mn;
	}

	for (int i = 0; i < n; i++) {
		if (i)
			cout << " ";
		cout << a[i];
	}
	return 0;
}

/* Find 3 minimum values of array
- Do not change the array content
- Do not iterate on the array more than once
*/

int mainAA4() {
	int n, tmp, mn[3];

	cin >> n;
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;

		if (i < 3)
			mn[i] = value;
		else {
			// Find maximum position
			int mx_pos = 0;
			for (int j = 1; j < 3; ++j) {
				if (mn[mx_pos] < mn[j])
					mx_pos = j;
			}

			if (value < mn[mx_pos])
				mn[mx_pos] = value;
		}
	}

	// let's order the first 3 values. We can do in several ways
	// Find maximum position
	int mx_pos = 0;
	for (int j = 1; j < 3; ++j) {
		if (mn[mx_pos] < mn[j])
			mx_pos = j;
	}
	// swap max with last
	tmp = mn[2];
	mn[2] = mn[mx_pos];
	mn[mx_pos] = tmp;

	// Swap first 2 elements if needed
	if (mn[0] > mn[1]) {
		tmp = mn[0];
		mn[0] = mn[1];
		mn[1] = tmp;
	}

	for (int i = 0; i < 3; i++)
		cout << mn[i] << " ";	// not ordered


	return 0;
}

// Smallest pair
int mainAA5() {
	const int N = 200;

	int n, a[N];

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];

	/**
	 let's calculate Ai+Aj+j-i for every pair (i,j)
	 such that i < j
	 this can be done using nested for loops.
	 **/
	// let's use some big value and later minimize
	int mn;
	bool first_time = true;

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int tmp = a[i] + a[j] + j - i;
			if (first_time || tmp < mn) {
				mn = tmp;
				first_time = false;
			}
		}
	}
	cout << mn << endl;
	return 0;
}


//Is paliandrome?

int mainAA6() {
	// The size of the array should be larger than
	// the maximum value of N
	int arr[1000];

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	// We need to compare the value at the left half
	// to those in the right half
	// The value at index (0) should be compared to the value at index (N-1)
	// Then the value at index (1) should be compared to the value at index (N-2)
	// So, clearly we need to increment the left index and decrement the right one
	// On reaching the index N/2, we are sure that we have compared all the elements
	// of both sides so we don't need to do anything and the array is palindrome
	for (int i = 0; i < N / 2; i++) {
		if (arr[i] != arr[N - 1 - i]) {
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
	return 0;
}

// Find most frequent number
int mainAA7() {
	int n;
	cin >> n;
	const int MAX = 270 + 500 + 1;
	int frequency[MAX] = { 0 };	// initialize with zeros. You can't do for other values (e.g. 1) this way.

	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;

		value += 500;	// shift all values to be positive
		frequency[value]++;
	}

	int mx_pos = 0;
	for (int i = 0; i < MAX; i++) {
		if (frequency[mx_pos] < frequency[i])
			mx_pos = i;
	}
	cout << mx_pos - 500 << " has repeated " << frequency[mx_pos] << " times ";
}

// Digits frequency
int mainAA8() {
	int n, x, occurrence[10] = {0};

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> x;

		if (x == 0)
			occurrence[0]++;

		while (x) {
			int digit = x % 10;
			occurrence[digit]++;
			x /= 10;
		}

	}
	for (int i = 0; i <= 9; i++) {
		cout << i << " " << occurrence[i] << endl;
	}

}


