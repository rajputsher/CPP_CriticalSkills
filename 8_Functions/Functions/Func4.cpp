#include<iostream>
#include<cmath>
using namespace std;

// A parameter is the variable which is part of  declaration
// a, b are parameters. 10 is default argument for b
void print(int a, int b = 10) {
	cout << a << " " << b << "\n";
}

int mainF10() {
	// argument is an expression used when calling the method.
	int x = 2;

	// x, 5, 3*2+1 are arguments PASSED to print function
	print(x, 5);
	print(3*2+1, x);

	return 0;
}

//////////////////////////////////////////////////
//********** Pass by reference *****************
void change(int a, int &b) {
	a++;
	b++;
}

void read(int x, int &y, string &str) {
    cout<<"x: ";
	cin >> x ;
	cout<<"\ny: ";
	cin>> y;
	cout<< "\nString: ";
	cin>> str;
	cout<< "\n";
}

int mainF11() {
	int a = 1, b = 1;
	change(a, b); // Here a does not change
	cout << a << " " << b << "\n";

	string name;
	read(a, b, name); // A does not print anything other than 1
	cout << a << " " << b << " " << name << "\n";

	return 0;
}

////////////////////////////////////////////////////////////////////
// Passing array
// Arrays are always passed by reference
int sum_array(int arr[], int len) { //same as : int sum_array(int arr, int len) {
	int sum = 0;
	for (int i = 0; i < len; ++i)
		sum += arr[i];
	return sum;
}

int mainF12() {
	int arr[6] = {1, 2, 3, 4, 5, 6};
	cout << sum_array(arr, 3) << "\n";
	cout << sum_array(arr, 6) << "\n";

	return 0;
}

//////////////////////////////////////////////////////////////////
// Is lower string?

// here this is passing by value not reference
bool is_lower(string str) {
	for (int i = 0; i < (int)str.size(); ++i) {
		bool lower = 'a' <= str[i] && str[i] <= 'z';

		if (!lower)
			return false;
	}
	return true;
}

// here this is passing by reference
// Passing by reference will not create a copy of the data instead works on the same address
bool is_lower1(const string &str) {
	for (int i = 0; i < (int)str.size(); ++i) {
		bool lower = 'a' <= str[i] && str[i] <= 'z';

		if (!lower)
			return false;
	}
	return true;
}

int mainF13() {
	cout << is_lower1("abc") << "\n";
	cout << is_lower1("aBC") << "\n";

	return 0;
}

//////////////////////////////////////////////////////////////////////

