#include<iostream>
using namespace std;

int main1()
{
	// int for integer
	int age = 55;

	cout<<age<<"\n";

	// double used for fractions (or float)
	double weight = 92.5;

	cout<<"My weight is "<<weight<<"\n";

	return 0;
}

int main2()
{
	// Declare variable in memory. Garbage value
	int number1;
	int number2;

	// Assign values (in memory(
	number1 = 30;
	number2 = 10;

	// Get values
	cout<<number1 + number2<<"\n";
	cout<<number1 - number2<<"\n";

	// Reassign value
	number1 = 50;
	cout<<"2n+1 = "<<number1 * 2 + 1<<"\n";

	return 0;
}


int main3()
{
	double weight = -92.5;

	char group = 'd';

	bool is_male = true;
	bool like_football = false;

	int age = 55;
	string name = "mostafa";

	cout<<"I am "<<age<<" years old\n";
	cout<<"My weight is "<<weight<<"\n";

	cout<<"my name is "<<name
		<<" and group "<<group<<"\n"
		<<is_male<<" "<<like_football<<"\n";

	return 0;
}


int main4()
{
	int a = 10;
	int b = 21;

	int i1 = a + b / 2;		// 20
	int i2 = (a + b) / 2;	// 15

	double x = 10.0;
	double y = 21;

	double d1 = x + y / 2.0;	// 20.5
	double d2 = (x + y) / 2.0;	// 15.5

	return 0;
}

// ***********Reading Variables************ //
int main5()
{
	int num;

	cout<<"Enter your lucky number\n";

	cin>>num;

	cout<<"********\n";
	cout<<2 * num + 1<<"\n";

	return 0;
}


int main6() {
	int a, b;

	cout << "Enter 2 numbers\n";

	cin >> a >> b;

	cout << a * b << " " << a + b << "\n";

	return 0;
}

int main7() {
	int age;
	cout<<"Enter age: ";
	cin>>age;

	double weight;
	cout<<"Enter weight: ";
	cin>>weight;

	char group;
	cout<<"Enter group: ";
	cin>>group;

	string name;
	cout<<"Enter name: ";
	cin>>name;

	cout<<"I am "<<name<<" belongs to group "<<group<<"\n";
	cout<<"My weight "<<weight<<" and age "<<age;

	return 0;
}

//############ const variables ##################
#include <climits> // INT_MAX


int main8() {
	// Use capital letters
	const double PI = 3.14159;
	//PI = 10;	// CAN't change

	const int LUCKY { 13 };

	//const int x;	 CAN'T you must assign value

	const char charVal = 'A';

	const string str = "Welcome to our BANK";

	// C++ limits as const
	cout << INT_MAX << "\n";	// 2147483647
	cout << INT_MIN << "\n";	// -2147483648

	return 0;
}

