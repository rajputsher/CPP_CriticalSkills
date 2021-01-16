#include <iostream>
using namespace std;

// global variable: visible to lines BELOW it
int global_val { 9 };

int g2;		//  = 0
int g3 {};	// = 0

int g4 = ++global_val;

// Later in headers/files topic
int static global_sval = 10;

void fun() {
	int i1 { 0 };			// local variable
	int i2;					// local: garbage
	static int si { 0 };	// static variable

	++i1, ++si;
	global_val += 10;
	cout <<"Local garbage: "<< i2 << "\tStatic Variable: " << si << "\tGlobal variable: "
			<< global_val << "\n";
}

int main() {
	fun(), fun(), fun();
	cout <<"Global variable in main: "<< global_val << "\n";
	// 1 1 20
	// 1 2 30
	// 1 3 40
	// 40

	return 0;
}
