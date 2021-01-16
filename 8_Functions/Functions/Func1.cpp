#include<iostream>
using namespace std;

// Sum of n numbers
int mainF1() {
	int n;
	cin >> n;

	int sum = 0;

	for (int i = 1; i <= n; ++i)
		sum += i;

	cout << sum << "\n";

	return 0;
}

int sum1_to_n(int n) {
	int sum = 0;

	for (int i = 1; i <= n; ++i)
		sum += i;

	return sum;
}

int mainF2() {
	int n;
	cout<<"Enter the value of n: ";
	cin >> n;
	int result = sum1_to_n(n);

	cout <<"\nSum of first "<<n << "integers is : "<<result << "\n";

	return 0;
}

