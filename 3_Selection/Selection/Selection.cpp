#include<iostream>
using namespace std;

int main1() {
	int salary;
	cin>>salary;

	if (salary < 1000)
		cout<<"you are poor\n";

	cout<<"All good";

	return 0;
}


int main2() {
	int num;
	cin>>num;

	if (num == 10)
	{
		int x = 3;
		cout<<"10 is lucky number\n";
		cout<<"also "<<2*num + x<<"\n";
	}
	//cout<<x;	# not visible here!

	return 0;
}


int main3() {
	int salary;
	cin>>salary;

	if (salary < 1000)
		cout<<"you are poor\n";
	else if (salary >= 1000 && salary < 20000)
		cout<<"good salary\n";
	else
		cout<<"you are rich\n";

	return 0;
}

int main4() {
	int salary;

	cout<<"Enter salary: ";
	cin>>salary;

	if (salary < 1000)
	{
		cout<<"Enter age: ";
		int age;
		cin>>age;

		if (age < 22)
			cout<<"You are still young.";
	}
	else
		cout<<"you are rich\n";

	//cout<<age; 	// NOT visible outside scope

	return 0;
}


int main5() {
	int num;
	cin>>num;

	if (num < 10)
		cout<<"1 digit\n";
	else if (num < 100)
		cout<<"2 digits\n";
	else if (num < 1000)
		cout<<"3 digits\n";
	else if (num < 10000)
		cout<<"4 digits\n";
	else
		cout<<"5 or more digits\n";

	return 0;
}


int main6() {
	// Good choice for a number here is double
	double num1, num2;
	char operation;

	cin >> num1 >> operation >> num2;

	if (operation == '+')
		cout << num1 + num2 << "\n";

	else if (operation == '-')
		cout << num1 - num2 << "\n";

	else if (operation == '*')
		cout << num1 * num2 << "\n";

	else
		cout << num1 / num2 << "\n";

	return 0;
}

int main7() {
	int num1, num2;

	cin >> num1 >> num2;

	if (num1 < num2)
		cout << num1 << "\n";
	else
		cout << num2 << "\n";

	return 0;
}

int main8A() {
	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	if (num1 < num2) {
		// Then either num1 or num3 is the answer
		if (num1 < num3)
			cout << num1 << "\n";
		else
			cout << num3 << "\n";
	} else	// Then either num2 or num3 is the answer
	{
		if (num2 < num3)
			cout << num2 << "\n";
		else
			cout << num3 << "\n";
	}

	return 0;
}

int main8B() {
	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	if (num1 < num2 && num1 < num3)
		cout << num1 << "\n";
	else if (num2 < num1 && num2 < num3)
		cout << num2 << "\n";
	else
		cout << num3 << "\n";

	return 0;
}

int main8C() {
	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	int answer = num1;

	if (answer > num2)
		answer = num2;

	if (answer > num3)
		answer = num3;

	cout << answer << "\n";

	return 0;
}

int main9() {
	int num;
	cin >> num;

	bool is_even = (num % 2 == 0);

	if (is_even)
		cout << num % 10 << "\n";
	else {
		if (num < 1000)
			cout << num % 100 << "\n";
		else if (num < 1000000)
			cout << num % 10000 << "\n";
		else
			cout << -num << "\n";
	}
	return 0;
}

int main10() {
	int n;
	cin>>n;

	if (n < 10000)
		cout<<"this is a small number\n";
	else
	{
		int digit1 = n%10;
		n = n/10;
		int digit2 = n%10;
		n = n/10;
		int digit3 = n%10;	// old value of n gone

		int sum = digit1+digit2+digit3;

		if ((sum%2) != 0)	// odd
			cout<<"this is a great number\n";
		else
		{
			bool is_digit1_odd = (digit1 % 2 == 1);
			bool is_digit2_odd = (digit2 % 2 == 1);
			bool is_digit3_odd = (digit3 % 2 == 1);

			if (is_digit1_odd || is_digit2_odd || is_digit3_odd)
				cout<<"this is a good number\n";
			else
				cout<<"this is a bad number\n";
		}
	}
	return 0;
}

int main11() {
	// Since C++17

	int x = 11;
	if (x % 2 == 1)
		cout << x << " is odd\n";
	else if (x % 2 == 0)
		cout << x << " is even\n";

	cout << x << " is visible here but no need\n";

	// y visible only in if-else block
	if (int y = 10; y % 2 == 1)
		cout << y << " is odd\n";
	else if (y % 2 == 0)
		cout << y << " is even\n";

	return 0;
}
