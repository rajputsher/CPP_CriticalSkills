#include<iostream>
using namespace std;


//**************Binary Unary operators****************//
int main1() {
	int x {6}, y {3};

	cout << x + y << "\n";			// 9
	cout << x + 2 * y - 1 << "\n";	// 11
	cout << x / y << "\n";			// 2

	int z1 = (x + y) / 3 / 3;		// 1
	cout << z1 << "\n";

	return 0;
}

int main2() {
	int x {6};
	int y {-x};	// -6

	bool male {true};
	bool female { !male }; // False

	// 1 0
	cout << (!0) <<" "<<(!1);

	return 0;
}

//*************02 Prefix and Postfix Operators***************//

int main3() {

	int a, b;

	// ++a: prefix increment: increment then assign
	a = 10;
	b = ++a;
	cout<<a<<" "<<b<<"\n";	// 11 11

	a = 10;
	cout<<++a<<"\n";	// 11

	// a++: postfix increment: assign then increment
	a = 10;
	b = a++;
	cout<<a<<" "<<b<<"\n";	// 11 10

	a = 10;
	cout<<a++<<"\n";	// 10

	a = 10;
	cout<<(a++)<<"\n";	// 10

	a = 10;
	cout<<a++ + ++a<<"\n";	// undefined


	return 0;
}

int main4() {

	int a, b;

	// --a: prefix decrement: decrement then assign
	a = 10;
	b = --a;
	cout<<a<<" "<<b<<"\n";	// 9 9

	a = 10;
	cout<<--a<<"\n";	// 9

	// a--: postfix decrement: assign then decrement
	a = 10;
	b = a--;
	cout<<a<<" "<<b<<"\n";	// 9 10

	a = 10;
	cout<<a--<<"\n";	// 10

	a = 10;
	cout<<(a--)<<"\n";	// 10

	a = 10;
	cout<<a-- + --a<<"\n";	// undefined


	return 0;
}

//*************Assignment Operators*********************//

int main5() {
	int num {5};

	num = num + 1;
	cout<<"num1 "<<num<<"\n";	// 6

	num += 1;	// same as num = num+1
	cout<<"num1 "<<num<<"\n";	// 7

	num *= 2;	// same as num = num * 2
	cout<<"num1 "<<num<<"\n";	// 14

	num = num - (-2);
	cout<<"num1 "<<num<<"\n";	// 16

	num -= 10;	// num = num - 10
	num /= 2;	// num = num / 2

	return 0;
}

