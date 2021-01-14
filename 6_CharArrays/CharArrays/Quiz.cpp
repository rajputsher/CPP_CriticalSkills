#include<iostream>
using namespace std;

int mainQ1() {
	char x =  'c' + 2 * 'b' - 2 * 'a';
	cout<<x;
	return 0;
}
//'c' + 2 * 'b' - 2 * 'a' => 'c' + 2 * ('b' - 'a') => 'c' + 2 => 'e'.


int mainQ2() {
	string str = "abc";

	str[0] += 'A' - 'a';
	str[1] += 'A' - 'a';
	str[2] += 'A' - 'a';

	cout << str << "\n";

	return 0;
}
//coverts lower to uppercase

int mainQ3() {
	char str[] { "abcdef" };

	int cnt = 0;

	for (int i = 0; i < 6; ++i)
		cnt += str[i] - 'a';

	cout << cnt << "\n";

	return 0;
}
//It is sum of differences: 0 1 2 3 4 5 ==> 15

int mainQ4() {
	char str[] { "abcdef" };
	str[1] = 0;
	cout<<str;

	return 0;
}
//str = str[0]

int mainQ5() {
	string name;
	//cin.getline(name); //error
	getline(cin, name);
	cout<<name<<"\n";

	return 0;
}


int mainQ6() {

	string name1, name2;
	cin >> name1;
	getline(cin, name2);
	cout << name1 << " " << name2 << "\n";

	return 0;
}

int mainQ7() {

	string name1, name2;
	cin >> name1;
	getline(cin, name2);
        getline(cin, name2);
	cout << name1 << " " << name2 << "\n";

	return 0;
}

int mainQ8() {
	int n = 15;
	char arr[n];

	return 0;
}
//Q8 :In legal C++, no. Array length shouldn't be variable. Based on compiler/flags this may compile. DON'T code this way

int mainQ9() {
	cout<<"cp \"c:\\my dir with space\" d:\\data";
	return 0;
}

int mainQ10() {
	string words[] {"Cpp", "is", "challenging!"};

	int len = 3;
	string all;
	for (int i = 0; i < 3; ++i)
		all += words[i] + ",";

	cout<<all;
	return 0;
}
