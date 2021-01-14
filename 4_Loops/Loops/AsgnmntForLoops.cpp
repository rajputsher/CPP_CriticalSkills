#include<iostream>
using namespace std;

int mainAF1(){
	int n;

	cin>>n;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if(i == j || n-i-1 == j)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<"\n";
	}

	return 0;
}


int mainAF2() {
	int count = 0;

	for (int x = 50; x <= 300; ++x) {
		for (int y = 70; y <= 400; ++y) {
			if (x < y && ((x + y) % 7 == 0)) {
				//cout<<x<<" "<<y<<" "<<x+y<<"\n";
				++count;
			}
		}
	}
	cout<<count<<"\n";

	return 0;
}


int mainAF2b() {
	int count = 0;

	for (int x = 50; x <= 300; ++x) {
		// Let's speed it
		// We can always start from the right condition maximum(70, x+1)
			// Saves some Y iterations
			// Remove the x < y condition
		int start = 70;

		if (start < x+1)
			start = x+1;

		for (int y = start; y <= 400; ++y) {
			if ((x + y) % 7 == 0) {
				//cout<<x<<" "<<y<<" "<<x+y<<"\n";
				++count;
			}
		}
	}
	cout<<count<<"\n";

	return 0;
}

int mainAF3() {
	int count = 0;

	for (int a = 1; a <= 200; ++a) {
		for (int b = 1; b <= 200; ++b) {
			for (int c = 1; c <= 200; ++c) {
				for (int d = 1; d <= 200; ++d) {
					count += (a + b == c + d);
				}
			}
		}
	}

	cout << count << "\n";

	return 0;
}


int mainAF3b() {
	int count = 0;

	for (int a = 1; a <= 200; ++a) {
		for (int b = 1; b <= 200; ++b) {
			for (int c = 1; c <= 200; ++c) {
				int d = a + b - c;

				if(1 <= d && d <= 200)
					count++;
			}
		}
	}

	cout << count << "\n";

	return 0;
}

int mainAF4() {
	int number;

	cin >> number;

	if (number == 1)
		cout << "NO\n";
	else {
		bool is_ok = true;

		for (int i = 2; i < number; ++i) {
			if (number % i == 0) {
				is_ok = false;
				break;
			}
		}

		if (is_ok)
			cout << "YES";
		else
			cout << "NO";
	}

	return 0;
}

int mainAF5() {
	int target;
	bool first_print = true;

	cin >> target;

	for (int number = 2; number <= target; ++number) {
		bool is_ok = true;

		for (int i = 2; i < number; ++i) {
			if (number % i == 0) {
				is_ok = false;
				break;
			}
		}

		if (is_ok)
		{
			if(!first_print)
				cout<<",";

			cout << number;

			first_print = false;
		}
	}

	return 0;
}

int mainAF6() {
	int n, a, b, total = 0;

	cin >> n >> a >> b;

	for (int i = 1; i <= n; ++i) {
		int tmp = i;	// be careful - take copy
		int digits_sum = 0;

		while (tmp) {
			digits_sum += tmp % 10;
			tmp /= 10;
		}

		if (a <= digits_sum && digits_sum <= b)
			total += i;
	}
	cout << total << "\n";

	return 0;
}


