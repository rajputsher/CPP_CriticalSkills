#include<iostream>
using namespace std;

int mainQ1() {
	int x = 0;

	while(x < 50)
		cout<<x<<" "; //It goes forever! x += 10 is outside the while. Be careful. Missing {}
		x += 10;

	return 0;
}

int mainQ2() {
	int x = 0;

	while(x < 50) {
		cout<<x<<" ";
		x += 10;
	}
	return 0;
}

int mainQ3() {
	int x = 0;

	while(x++ < 50) {
		cout<<x++<<" ";
		++x += 10;
	}
	return 0;
}

int mainQ4() {
	int n = 60;

	while (n > 5) {
		if (n % 2 == 0)
			n /= 2;
		else
			n = (n - 1) / 2;
	}
	cout<<n;
	return 0;
}


int mainQ5() {
	int n = 60;

	while (n > 5) {
		if (n == 7) {
			n = 70;
			continue;
		}

		if (n % 2 == 0)
			n /= 2;
		else
			n = (n - 1) / 2;

		if (n == 8)
			break;
	}
	cout << n;
	return 0;
}

