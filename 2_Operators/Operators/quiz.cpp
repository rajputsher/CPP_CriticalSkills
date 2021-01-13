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

// Logical operators , Division , modulus

int mainQ7() {
	int x = 3;
	int y = 4;
	x += (++y += 2);
	cout << x;
	return 0;
}

int mainQ8() {
	int x = 10;
	int y = 12;
	int w = 5;
	int z = 1;
	int r = ++x - y / (z + w--);
	cout << r;

	return 0;
}

int mainQ9() {
	int x = 1;
	int y = 2;
	int w = 3;
	int z = 4;
	int a = 1, b = 2, c = 3, d = 4, e = 2;
	int r = (a + (b - (d * e))) / (a + ++c) + ( (1+((x+y)*2)) * z);
	cout<<r;
	return 0;
}


int mainQ10() {
	int a { 2 }, b { 4 }, c { 6 };

	bool x { 3 * a == c };
	bool y { b <= c };
	bool z { a + b > c - 1 };

	cout << x << y << z;

	return 0;
}

int mainQ11() {
	double x = 0.1;
	cout << (x == 1 + x - 1); //Don't compare doubles with ==, as internal values are approximations.
	return 0;
}

int mainQ12() {
	string a {"practice"};
	string b {"MAKES "
			"perfect"};

    cout<<b<<endl;

	cout<<(a < b); //0:Upper case comes first before lower case
	return 0;
}

int mainQ13() {
	string a {"PRACTICE "};
	string b {"and practice"};

	//cout<<a < b; //Error
	cout<< (a < b);

	return 0;
}

int mainQ14() {
	int age {55}, weight {120};

	cout<<(  (age > 50) && (weight > 100) );
	cout<<(  (age == 50) && (weight > 100) );
	cout<<(  (age > 35) || (weight < 153) );
	cout<<(  (age > 60) || (weight < 90) );

	return 0;
}


int mainQ15() {
	int age {30}, salary {7000}, weight {110};

	cout<<(  (age > 40) && (salary < 7500) && (weight < 150) );
	cout<<(  (age > 25) && (salary < 8000) && (weight > 200) );
	cout<<(  (age > 35) || (salary > 60000) || (weight > 200) );
	cout<<(  (age > 35) && (salary > 6000) || (weight > 200) );
	cout<<(  (age > 40) && (salary > 6000) || (weight > 200) );

	return 0;
}

int main() {
	int x { 20 };

	x < 100 || (x+= 50 > 10);
	cout<<x<<" ";

	(x > 10) && ((++x > 50) || (x < 0));

	cout<<x<<" ";

	return 0;
}
