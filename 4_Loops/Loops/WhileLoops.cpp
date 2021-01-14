#include<iostream>
using namespace std;

int mainW1() {

	while (2 < 6)
	{
		cout<<"2 < 5. Forever\n";
	}

	return 0;
}


int mainW2() {
	int x = 1;

	while (x <= 5)
	{
		cout << x << " ";
		x = x + 1;
	}

	return 0;
}


int mainW3() {
	int x = 1;
	int sum = 0;

	while (x < 6)
	{
		sum += x;
		++x;
	}
	cout<<sum;

	return 0;
}

int mainW4() {
	int x = 5;
	int sum = 0;

	while (x >= 0)
	{
		sum += x;
		x--;
	}
	cout<<sum;

	return 0;
}

int mainW5() {
	int x, y;

	while (true) {
		cin >> x >> y;

		if (y == 0)
		{
			cout<<"Y is zero!!\n";
			break;
		}
		cout << x / y << "\n";
	}
	cout<<"Bye\n";

	return 0;
}


int mainW6() {
	int x, y;

	while (true) {
		cin >> x >> y;

		if (y == 0)
		{
			cout<<"Y is zero. Try other 2 numbers\n";
			continue;
		}
		cout << x / y << "\n";
	}
	cout<<"Bye\n";	// never reached

	return 0;
}

// While loop practice

int mainW7() {
	int end;
	cin >> end;

	int start = 1;

	while (start <= end) {
		if (start % 3 == 0)
			cout << start << "\n";
		start += 1;
	}
	return 0;
}

int mainW8() {
	int num, pow;
	cin >> num >> pow;

	int result = 1;

	while (pow >= 1) {
		result *= num;
		--pow;
	}
	cout << result;
	return 0;
}


int mainW9a() {
	int num;
	cin >> num;

	int digits = 0;

	while (num > 0) {
		digits += 1;
		num = num / 10;
	}
	cout<<digits;
	return 0;
}
// Two bugs in the above code : does not handle 0

int main9b() {
	int num;
	cin >> num;

	int digits = 0;

	if (num == 0)
		digits = 1;
	else {
		while (num > 0) {
			digits += 1;
			num = num / 10;
		}
	}
	cout << digits;
	return 0;
}
// There is another bug in the above program: Overflowing

int main9C() {
	int num;
	cin >> num;

	int digits = 0;

	if (num == 0)
		digits = 1;
	else if (num == -2147483648)
		digits = 10;
	else {
		if (num < 0)
			num = -num;

		while (num > 0) {
			digits += 1;
			num = num / 10;
		}
	}
	cout << "# of digits of "<<num<<" is "<<digits;
	return 0;
}

int main9D() {
	int num;
	cin >> num;

	int tem_num = num;
	int digits = 0;

	if (num == 0)
		digits = 1;
	else if (num == -2147483648)
		digits = 10;
	else {
		if (num < 0)
			num = -num;

		while (num > 0) {
			digits += 1;
			num = num / 10;
		}
	}
	cout << "# of digits of "<<tem_num<<" is "<<digits;
	return 0;
}

int main9E() {
	int num;
	cin >> num;

	int tem_num = num;
	int digits = 0;

	if (num == 0)
		digits = 1;
	else {
		while (num != 0) {
			digits += 1;
			num = num / 10;
		}
	}
	cout << "# of digits of "<<tem_num<<" is "<<digits;
	return 0;
}

int main10() {
	int T;
	cin >> T;

	while (T > 0) {
		int num;
		cin >> num;

		int sum = 0;
		int start = 1;

		while (start <= num) {
			sum += start;
			start++;
		}
		--T;
		cout << "Sum from 1 to " << num << " = " << sum << "\n";
	}

	return 0;
}

