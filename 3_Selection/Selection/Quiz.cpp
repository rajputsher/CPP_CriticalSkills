#include<iostream>
using namespace std;

int mainQ1() {
	int val { 10 };

	if (val < 10)
		cout << 1;
	else if (val < 20)
		cout << 2;
	else
		cout << 3;

	return 0;
}


int mainQ2() {
	int val { 20 };

	if (val < 10)
		cout << 1;
	else if (val < 20)
		cout << 2;
	else
		cout << 3;

	return 0;
}

int mainQ3() {
	int val { 5 };

	if (val < 10)
		cout << 1;
	if (val < 20)
		cout << 2;
	else
		cout << 3;

	return 0;
}

int mainQ4() {
	int val { 25 };

	if (val < 10); //if statement ends in the same line
		cout << 1;
	if (val < 20)
		cout << 2;
	else
		cout << 3;

	return 0;
}

int mainQ5() {
	int val { 5 };

	if (val < 10)
		cout << 1;
		cout << 2;

	return 0;
}

int mainQ6() {
	int val { -5 };

	if (val)
		cout << 1;

	cout<<"bye\n";

	return 0;
}

int mainQ7() {
	if (true) { {
			int x  = 0;
		}
	}
	cout<<"bye\n";

	return 0;
}

/** \brief
 *
 int mainQ8() {
	if (true) {
		{
			int x  = 0;
		}
		++x; // Out of scope : Compiler error
	}
	cout<<"bye\n";

	return 0;
}
 *
 */

int mainQ9() {
	int t = 2*3 - 6;

	if (t = 0) //t = 0 is assignment. One need to use t ==0 for comparison. As t assigned to 0, it became if(false)
		cout<<"Yes\n";
	else
		cout<<"Ooh\n";


	return 0;
}


int mainQ10() {
	int salary = 500;

	if (salary < 1000)
		salary += 5000;
	if (salary >= 1000 && salary < 20000)
		salary += 6000;
	else
		salary -= 10000;

	cout<<salary;

	return 0;
}

