#include<iostream>
using namespace std;
int mainQF1() {
	int a = 0, b = 1, c = 2;
	while(a + b + c < 16)
	    cout << a + b + c << " ", ++a, b += 2, c += 3;
	return 0;
}
//While loop to for loop one to one conversion
int mainQF1b() {
	for (int a = 0, b = 1, c = 2; a + b + c < 16; ++a, b += 2, c += 3)
	    cout << a + b + c << " ";
	return 0;
}

int mainQF2() {
	for (int a = 0, b = 1, c = 2; a + b + c < 16; ++a, b += 2, c += 3)
	    cout << a + b + c << " ";
	return 0;
}

int mainQF3() {
	for (int a = 5; a > 1; a--, cout << a);

	return 0;
}

int mainQF4() {
	int t = 4;
	for(;t++;t++)
	{
		if(t % 2 == 0)
			continue;
		break;
	}
	cout<<t;

	return 0;
}


int mainQF5() {
	int t = 0;
	for (int c = 0; c < 3; ++c) {
		for (int var = 0; var < 4; ++var)
			for (int h = 0; h < 2; ++h)
				++t;
			++t;
		++t;
	}
	cout << t;

	return 0;
}
