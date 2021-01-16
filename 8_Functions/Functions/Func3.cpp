#include<iostream>
using namespace std;

int lucky_number() {
	return 13;
}

int main2() {
	return 0;
}

void print_sum(int a, int b) {
	cout << a + b << "\n";
}

int mainF6() {
	cout << lucky_number() << "\n";
	print_sum(2, -5);

	return 0;
}


//////////////////////////////////////////////
// initializing the arguments
int our_pow(int n, int p = 3) {
	int result = 1;

	while (p--)
		result *= n;

	return result;
}

int mainF7() {
	cout << our_pow(2) << "\n";
	cout << our_pow(2, 3) << "\n";
	cout << our_pow(2, 4) << "\n";

	return 0;
}

///////////////////////////////////////////////

int add(int a, int b)
{
	return a+b;
}

int mainF8() {
	cout << add(2, 3) << "\n";
	cout << add(2, 3.5) << "\n"; //parameter casting

	return 0;
}

///////////////////////////////////////////////
// Same function name with different return values and number of arguments
// function overloading
double add(double a, double b) {
	return a + b;
}

int add(int a, int b, int c) {
	return a + b + c;
}

int mainF9() {
	cout << add(2, 3) << "\n";
	cout << add(2.0, 3.5) << "\n";
	return 0;
}

///////////////////////////////////////////////


