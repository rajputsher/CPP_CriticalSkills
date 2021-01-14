#include <iostream>
using namespace std;

// Recamans sequence

int mainAA9() {
	const int N = 201;	// Be careful. We need 201 values NOT 200
	int sequence[N], indx;

	int occurrence[N * 10] = { 0 };	// possibly i-th value is much less than 10 * i

	cin >> indx;
	sequence[0] = 0;
	occurrence[0] = 1;	// use a value as an index in the array

	for (int i = 1; i <= indx; i++) {
		int cur = sequence[i - 1] - (i - 1) - 1;

		if (cur < 0 || occurrence[cur])
			cur = sequence[i - 1] + (i - 1) + 1;

		sequence[i] = cur;
		occurrence[cur] = 1;
	}

	cout << sequence[indx];

}


// Fixed Sliding window
//Method 1:
int mainAA10a() {
	const int N = 200;
	int n, arr[N], k, min_index, max_sum = -10000000;
    cout<<"Enter K(sliding window range): ";
	cin >> k;

	cout<<"\nEnter N(must be greater than "<<k<<" ):";
	cin >> n;

    cout<<"\nEnter "<<n<<" array elements: ";
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n - k + 1; i++) {
		int sum = 0;
		for (int j = 0; j < k; ++j)
			sum += arr[i + j];

		if (sum > max_sum) {
			max_sum = sum;
			min_index = i;

		}
	}
	cout<<"The sub array from index " << min_index << " to " << min_index + k - 1 << " has the maximum sum of: " << max_sum << " with sliding window " <<k<<".\n";

}

//Method 2
int mainAA10b() {
	const int N = 200;
	int n, k;
	int arr[N];
    cout<<"Enter K(sliding window range): ";
	cin >> k;

	cout<<"\nEnter N, number of elements in the array (must be greater than "<<k<<" ):";
	cin >> n;

    cout<<"\nEnter "<<n<<" array elements: ";
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	int max_sum = 0;	// First k values
	int min_index = 0;
	for (int i = 0; i < k; i++)
		max_sum += arr[i];

	int sum = max_sum;
	for (int i = k; i < n; i++) {
		// remove element before and add current element. Now they are new k elements
		sum = sum - arr[i - k] + arr[i];

		if (sum > max_sum) {
			max_sum = sum;
			min_index = i - (k - 1);
		}
	}
	cout<<"The sub array from index " << min_index << " to " << min_index + k - 1 << " has the maximum sum of: " << max_sum << " with sliding window " <<k<<".\n";

}


//Method 3


int mainAA10c() {
	const int N = 200;
	int n, arr[N] = {0}, k, min_index, max_sum = -10000000;
    cout<<"Enter K(sliding window range): ";
	cin >> k;

	cout<<"\nEnter N, number of elements in the array (must be greater than "<<k<<" ):";
	cin >> n;

    cout<<"\nEnter "<<n<<" array elements: ";
	// Note that we deal with 1-base array
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];

		// Cumulative sum for the array to get sum of sub array without nested loop
		// Each element of the array carries the sum of all previous elements
		arr[i] += arr[i - 1];
	}

	for (int i = k; i <= n; i++) {
		if (arr[i] - arr[i - k] > max_sum) {
			max_sum = arr[i] - arr[i - k];
			min_index = i - k + 1;

		}
	}
	cout<<"The sub array from index " << min_index << " to " << min_index + k - 1 << " has the maximum sum of: " << max_sum << " with sliding window " <<k<<".\n";

}

// count increasing sub-arrays

int mainAA11a() {
	int a[200];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int result = 0;

	// For every possible array length
	// Try all possible sub-arrays
	// Verify and sum
	for (int len = 1; len <= n; ++len) {
		for (int st = 0; st < n - len + 1; ++st) {
			bool is_ok = true;
			for (int k = 1; k < len && is_ok; ++k) {
				if (a[st + k] <= a[st + k - 1])
					is_ok = false;
			}
			result += is_ok;
		}
	}

	cout << result << endl;

	return 0;
}


int mainAA11b() {
	int a[200];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int result = 0;

	// for every index i in the array we consider it as the start of a subarry
	for (int i = 0; i < n; i++) {
		// adding one to result because any subarray of size one considered increasing
		// this subarray will include the value in index i
		result++;
		// trying expanding a subarray which starts with at index i and
		// if this subarray still increasing then we add one to our result
		// otherwise we should stop expanding this subarray
		for (int j = i + 1; j < n; j++) {
			// if the current value is greater than or equal the previous one
			// then it's increasing
			if (a[j] >= a[j - 1])
				result++;
			// otherwise stop
			else
				break;
		}
	}

	// printing the result
	cout << result << endl;

	return 0;
}

int mainA11c() {
	int a[200];

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> a[i];

	int result = 0;
	int len = 1;


	// Let say we have increasing sequence of length 4. It means we have 4*5/2 valid sub arrays
	// So, find each maximual sub-sequence and add them using n*(n+1) /2
	// Or just increment with length each time we extend it


	// We will count sequence of length  > 1. Later add +n
	for (int i = 1; i < n; i++) {
		// Keep expand len as long as the sub-array is increasing.
		if (a[i - 1] <= a[i]) {
			result += len;
			++len;
		} else
			len = 1;
	}

	cout << result + n << endl;

	return 0;
}

// Josephus problem
int mainAA12() {
	int n, k;

	cin >> n >> k;

	// Let's mark them in 0-based array
	bool is_removed[200] = { 0 };

	int last_pos = 0;	// The first position to simulate from it

	// We will just simulate the running.
	// Start from last killed position
	// Count K times, but skip these killed positions already
	for (int t = 0; t < n; ++t) {
		int remaining_alive = n - t;

		int current_k = k;
		// Ignore this if/else condition for now. See bottom of code. It is for handling very large K
		if (k % remaining_alive == 0)
			current_k = remaining_alive;
		else
			current_k = k % remaining_alive;

		int step = 0;
		int last_person = -1;
		while (step < current_k) {
			if (is_removed[last_pos] == 0)	// not removed. consider it and increment the step
				last_person = last_pos, step++;
			last_pos = (last_pos + 1) % n;	// loop back to the array if needed
		}
		is_removed[last_person] = 1;
		cout << last_person + 1 << "\n";
		last_person = -10;
	}
	/*
	 * About the if else. We want to handle when k is so big
	 * Let's say remaining_alive = 4 and k = 6
	 * 		This is the same as if k = 2   (6%4 = 2)
	 *
	 * 	Similarly
	 * 	Let's say remaining_alive = 4 and k = 6
	 * 		This is the same as if k = 2   (10%4 = 2)
	 *
	 * 	This is the same as the useless cycles in the clock
	 * 		4 is same as any 4 + k*12
	 *
	 * 	So in general, we don't need to iterate k times
	 * 		we only need: k % remaining_alive
	 *
	 * 	But we need 1 special case handling to k % remaining_alive == 0
	 * 		In this case we iterate remaining_alive steps
	 */

	return 0;
}


