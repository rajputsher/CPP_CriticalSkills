#include<iostream>
using namespace std;

int mainR1() {
	cout << (3 > 5) << "\n";
	cout << (3 < 5) << "\n";
	cout << (3 == 5) << "\n";
	cout << (3 >= 5) << "\n";
	cout << (3 >= 3) << "\n";
	cout << (3 == 3) << "\n";
	cout << (3 > 1) << "\n";
	cout << (3 != 4) << "\n";
	cout << (3 != 3) << "\n";

	return 0;
}

int mainR2() {
	int x, y;
	x = 3, y = 5;

	cout << (x > y) << "\n";
	cout << (x < y) << "\n";
	cout << (x == y) << "\n";
	cout << (x >= y) << "\n";

	return 0;
}

int mainR3() {
	int x, y;
	x = 3, y = 5;

	bool result = (x > y);
	cout << result << "\n";

	result = (x < y);
	cout << result << "\n";

	cout << !result << "\n";
	cout << !(x < y) << "\n";

	return 0;
}

int mainR4() {
	string name1 { "Bahubali" }, name2 { "Mahendra" };
	string name3 {"Rocky"}, name4 {"Bhai"}, name5 {"OM"};

	cout<<(name1 < name2) <<"\n";
	cout<<(name1 > name3) <<"\n";
	cout<<(name1 != name4) <<"\n";
	cout<<(name1 == name4) <<"\n";

	cout<<(name1 == name5) <<"\n";
	cout<<(name1 > name5) <<"\n";

	return 0;
}

int mainR5() {

	double a { 3.0 / 7.0 };
	double b { 1 + 3.0 / 7.0 - 1 };

	//0.428571 0.428571 0 SURPRISE SOMETIMES not 1
	cout<<a<<" "<<b<<" "<<(a == b)<<"\n";

	a = 5.0, b = 4.99999999999999999;

	//5 5 1 SURPRISE SOMETIMES not 0
	cout<<a<<" "<<b<<" "<<(a == b)<<"\n";

	// Never compare doubles for equality directly

	return 0;
}

