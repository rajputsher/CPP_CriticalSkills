#include<iostream>
using namespace std;

int fQ2(int n) {
	int res = 1;
	while (n--)
		res *= 2;
	return res;
}

int mainQ2() {
	cout<<fQ2(5);
	return 0;
}

/*
int, int f1(int n) {   //We can't return more than a value in this way!
	int res = 1;
	while (n--)
		res *= 2;
	return n, res;
}

int main() {
	int x, y = f1(5);
        cout<<x<<" "<<y;
	return 0;
}
*/
/////////////////////////////////////////////////////////////

int f2(int n) {// Always outputs zero , because Inital value is 0
	int res = 0;
	for (int i = 0; i < n; ++i)
		res *= i + 3;
	return res;
}

int mainQ3() {
	cout << f2(13);

	return 0;
}

//////////////////////////////////////////////////////////////
int a() {
	return 10;
}
int b(int x = 5) {
	return 2 * x + a();
}
void c() {
	cout << b(3);
}
int mainQ4() {
	//cout << c(); //Error : c() is void, don't cout it
	c();
	return 0;
}
//////////////////////
/*
int f2() {
	return 3 + f1(); //Error: f2 doesn't know what is f1.
}
int f1() {
	return 2 * f2();
}
int main() {
	f1();

	return 0;
}


*/

///////////////////////////////////////////////////////////

int hello(int x, int y); //function declaration

int hello(int x, int y) { //function definition
	return x + y;
}

int mainQ5() {
	cout << hello(3, 5);

	return 0;
}

///////////////////////////////////////////////////////////

int f10();

int f20() {
	return 3 + f10();
}
int f10() {
	return 2 * f20();
}
int mainQ6() {
	cout << f10(); // The code runs but infinity processing! Be careful from circular calls
	return 0;
}

//////////////////////////////////////////////////////////
int fQ7(int x) {
	return 2 * x;
}
int mainQ7() {
	cout << fQ7('A');

	return 0;
}

//////////////////////////////////////////////////////////


int f(int x) {
	return 3 * x;
}
double f(double x, double y) {
	return (f(x) + f(y)) / 2;
}
int mainQ8() {
	cout << f(f(f(4, 3)));

	return 0;
}

///////////////////////////////////////////////////////////
/*
int fq9() {
	return 1;
}
double fq9() { //Error: the return type is not a way to differentiate the same function name
	return 2.5;
}
int main() {
	double x = fq9();
	cout << x;

	return 0;
}
*/

//////////////////////////////////////////////////////////

