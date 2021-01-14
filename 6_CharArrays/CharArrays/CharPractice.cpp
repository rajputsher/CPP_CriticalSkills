#include <iostream>
using namespace std;


// Alternate concatenate letters print from 2 words
int mainCP1() {
	string first, second;

	cin >> first >> second;

	int mx_sz = first.size();

	if (mx_sz < second.size())
		mx_sz = second.size();

	for (int i = 0; i < mx_sz; ++i) {
		if (i < first.size())
			cout << first[i];

		if (i < second.size())
			cout << second[i];
	}

	cout << "\n";
	return 0;
}


//Letters frequency: only small case letters
int mainCP2() {
	string str;

	cin >> str;

	int frequency[150] = {0};	// initalize to zeros

	for (int i = 0; i < str.size(); ++i)
		frequency[str[i]]++;	// Use char as frequency

	for (int i = 'a'; i <= 'z'; ++i) {
		if (frequency[i])
			cout << (char) i << " " << frequency[i] << "\n";
	}

	return 0;
}


/*
Read a string and do the following conversions for its letters
- If it is an upper letter, don’t change
- If it is lower letter, use this map of 26 letters:
    - abcdefghijklmnopqrstuvwxyz
    - YZIMNESTODUAPWXHQFBRJKCGVL
    E.g. a ⇒ Y and z ⇒ L
- If it is digit, use this map of 10 letters:
    - 0123456789
    - !@#$%^&*()
Input ⇒ Output
    - acMNmn39 ⇒ YIMNPW$)
    - vwXYZ0123 ⇒ KCXYZ!@#$

*/

int mainCP3() {
	string from = "abcdefghijklmnopqrstuvwxyz0123456789";
	string to   = "YZIMNESTODUAPWXHQFBRJKCGVL!@#$%^&*()";

	char letter_map[150] = {0};

	for (int i = 0; i < from.size(); ++i)
		letter_map[from[i]] = to[i];

	string str;
	cin>>str;

	for (int i = 0; i < str.size(); ++i) {
		if('A' <= str[i] && str[i] <= 'Z')
			continue;

		str[i] = letter_map[str[i]];
	}
	cout<<str;

	return 0;
}

