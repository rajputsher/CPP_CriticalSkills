#include<iostream>
using namespace std;

int mainAO1() {
	int a = 0, b = 1;

	cout<<a++<<"\n";
	cout<<++a<<"\n";
	a += 2*b+1;
	b = ++a * 2;
	cout<<a<<" "<<b<<"\n";

	b = a;
	a = 12 + a / 3 / 2 - 2 * 2;
	cout<<a<<"\n";

	a = b;
	a = ((12 + a) / 3 / 2 - 2) * 2;
	cout<<a<<"\n";

	return 0;
}

int mainA02() {

	int a = 1, b = 1, c;

	cout<<(c = a+b, a = b, b = c,
		   c = a+b, a = b, b = c,
		   c = a+b, a = b, b = c,
		   c = a+b, a = b, b = c) <<endl;

	return 0;
}

int mainAO3() {

	int a = 210;

	a /= 2;
	cout<<a<<"\n";

	cout<<(a /= 3)<<"\n";
	cout<<(a /= 5)<<"\n";
	cout<<(a /= 7)<<"\n";

	cout<<(2+3) * (5-(-3)) / 5 / 8 <<"\n";

	a = 10;
	cout<<a++ + 10<<"\n";
	cout<<++a + 10<<"\n";
	cout<<a-- + 10<<"\n";
	cout<<--a + 10<<"\n";

	int b = 20;
	cout<<a++ + ++b<<"\n";	// Don't code this way

	cout<<a<<"\n";
	++a+=10;	// Don't code this way
	cout<<a<<"\n";



	return 0;
}

