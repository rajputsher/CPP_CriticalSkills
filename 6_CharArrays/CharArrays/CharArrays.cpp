#include<iostream>
using namespace std;

//Characters as integer values
int mainC1() {
	char ch1 = 'A';
	int ch_value = ch1;

	cout<<ch_value<<"\n";
	cout<<(int)'A'<<"\n";
	cout<<(int)'B'<<"\n";
	cout<<(int)'C'<<"\n";
	cout<<(int)'Z'<<"\n";
	cout<<(int)'A' + 26 - 1<<"\n";

	char ch2 = 90;
	cout<<ch2<<"\n";

	cout<<"***\n";

	cout<<(int)'a'<<"\n";
	cout<<(int)'b'<<"\n";
	cout<<(int)'c'<<"\n";
	cout<<(int)'z'<<"\n";
	cout<<(int)'a' + 26 - 1<<"\n";

	cout<<('A' < 'a')<<"\n";
	return 0;
}

//Coverting to upper and lower case

int mainC2() {
	char ch1 = 'D';

	if ('A' <= ch1 && ch1 <= 'Z') {
		cout << ch1 << " is an upper case\n";
		ch1 = ch1 - 'A' + 'a';
		cout << ch1 << " now is a lower case\n";
	} else if ('z' <= ch1 && ch1 <= 'z')
		cout << ch1 << " is already a lower case\n";
	else if ('0' <= ch1 && ch1 <= '9')
		cout << ch1 << " is a digit\n";
	else
		cout << ch1 << " is neither a digit nor a letter\n";

	return 0;
}

// Accessing string array
// String as char array
int mainC3() {
	string name = "Ironman";

	int sz = name.size();	// called function/method
	cout << sz << "\n";	// 7

	cout << name << "\n";

	for (int i = 0; i < sz; ++i)
		cout << name[i];	// internally array

	return 0;
}

// End of the string is a null character \0
int mainC4() {
	int numbers[6] = { 1, 2, 3, 4, 5, 6 };

	char name1[6] = { 'D', 'h','o','n', 'i' };	// 6 not 5
	char name2[6] = "Dhoni";

	string name3 = "Dhoni";

	cout << name1<< "\n";
	cout << name2 << "\n";
	cout << name3 << "\n";

	return 0;
}

// Cout complete string unlike in 1D-arrays
//With out null character at the end compiler will print some garbage at the end
int mainC5() {

	char name1[5];
	name1[0] = 'D';
	name1[1] = 'h';
	name1[2] = 'o';
	name1[3] = 'n';
	name1[4] = 'i';

	cout << name1 << "\n";

	return 0;
}


// Using null character ends the array of char

int mainC6() {

	char name1[6];
	name1[0] = 'D';
	name1[1] = 'h';
	name1[2] = 'o';
	name1[3] = 'n';
	name1[4] = 'i';
	name1[5] = '\0';	// Null character

	cout << name1 << "\n";

	return 0;
}

// Remember: while printing an array of char, the printing stops at the first encounter of null char \0
int mainC7() {

	char name1[6];
	name1[0] = 'D';
	name1[1] = '\0';
	name1[2] = 'o';
	name1[3] = 'n';
	name1[4] = 'i';
	name1[5] = '\0';	// Null character

	cout << name1 << "\n"; //Only D will be printed

	return 0;
}


//Reading string with spaces: getline

int mainC8() {

	string name1;
	getline(cin, name1);
	cout<<name1<<"\n";

	char name2[50];
	cin.getline(name2, 50);
	cout<<name2<<"\n";


	return 0;
}


// Array of strings

int mainC9() {

	// Array of names - each name is sequence of letters!
	string names[5] = {"Sherlock Holmes", "Tony Stark", "Hello world"};

	for (int i = 0; i < 5; ++i)
		cout<<names[i]<<"\n";

	return 0;
}

// Array of names: Console input
int mainC10() {

	// Array of names - each name is sequence of letters!
	string names[2];

	for (int i = 0; i < 2; ++i)
		cin>>names[i];

	return 0;
}

//Escape characters

int mainC11() {

	// Escape characters
	cout<<"hello\tworld\n";
	cout<<"\0";
	cout<<"Let's print a double quote \"  ";

	return 0;
}
