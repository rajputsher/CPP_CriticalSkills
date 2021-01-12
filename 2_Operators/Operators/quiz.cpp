#include<iostream>
using namespace std;

int mainQ1() {
	int a = 0, b = 1;
	a = ++b;
	cout<<"a= "<<a<<"\tb= "<<b<<endl;
	++b = a;
	cout<<"a= "<<a<<"\tb= "<<b<<endl;
	a = b++;
	cout<<"a= "<<a<<"\tb= "<<b<<endl;
	//b++ = a;
	return 0;
}


int mainQ2() {
	int a = 0;
	cout<<(a++, ++a, a++, ++a, a++)<<"\n";
	cout<<a;
	return 0;
}

int mainQ3() {
	int a = 2;
	a *= 3;
	int b = 1;
	b += a;
	a += b;
	cout << a + b;
	return 0;
}

int mainQ4() {
	int a = 2;
	a *= 3;
	int b = 1;
	b -= b;
	a /= b; //Div by zero: Run time error
	cout << a + b;
	return 0;
}

int mainQ5() {
	int b = 10;
	int a = -2 - (-5) - --b;
	cout << a;
	return 0;
}

int mainQ6() {
	int x = 4;
	x += x * 2 + 1;
	cout << x /3;
	return 0;
}
