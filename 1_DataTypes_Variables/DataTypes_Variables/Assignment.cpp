#include<iostream>
using namespace std;

int mainA1() {
	int a, b;

	cin >> a >> b;

	cout << a << " + " << b << " = " << a + b << "\n";
	cout << a << " - " << b << " = " << a - b << "\n";
	cout << a << " / " << b << " = " << a / b << "\n";
	cout << a << " * " << b << " = " << a * b << "\n";

	return 0;
}

int mainA2() {
	string name1;
	cout<<"What is student 1 name: ";
	cin>>name1;

	// Although looks as integer, no guarantee (make be big or has letters)
	string id1;
	cout<<"His id: ";
	cin>>id1;

	// Although looks as integer, but grade could be 30.5
	double grade1;
	cout<<"His math exam grade: ";
	cin>>grade1;

	/////////////////////////
	string name2;
	cout<<"What is student 2 name: ";
	cin>>name2;

	string id2;
	cout<<"His id: ";
	cin>>id2;

	double grade2;
	cout<<"His math exam grade: ";
	cin>>grade2;

	cout<<"\nStudents grades in math\n";

	cout<<name1<<" (with id "<<id1<<") got grade: "<<grade1<<"\n";
	cout<<name2<<" (with id "<<id2<<") got grade: "<<grade2<<"\n";
	cout<<"Average grade is "<<(grade1 + grade2) / 2.0<<"\n";

	// Notice we used () to apply this operation first. More later

	return 0;
}

int mainA3() {
	/*
	 * We know we will read 8 numbers
	 * 	The first number is the first odd
	 * 	The third number is the second odd
	 * 	The fifth number is the their odd
	 * 	The seventh number is the forth odd
	 *
	 * Same logic for even numbers
	 *
	 * The key: good naming variables and read them in right order
	 */
	int even1, even2, even3, even4;
	int odd1, odd2, odd3, odd4;

	cin>>odd1>>even1;
	cin>>odd2>>even2;
	cin>>odd3>>even3;
	cin>>odd4>>even4;

	int even_sum = even1 + even2 + even3 + even4;
	int odd_sum = odd1 + odd2 + odd3 + odd4;

	cout<<even_sum<<" "<<odd_sum<<"\n";

	return 0;
}

int mainA4() {
	int num1, num2, num3;

	num1 = 0, num2 = 1, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";
	num1 = num2, num2 = num3, num3 = num1 + num2, cout <<num3<<"\n";



	return 0;
}


int mainA5() {
	int num1, num2, num3;

	cin>>num1>>num2;

	// Swap operation in 3 steps using num3 as temporary storage
	// 1) put num2 value in num3
	num3 = num2;	// now num3 is 231

	// put num1 in num2
	num2 = num1;		// now num2 is 7

	// get the temp value in num3 in num1
	num1 = num3;

	cout<<num1<<" "<<num2<<endl;	// 231 7

	// if hard? maybe watch https://www.youtube.com/watch?v=A7li4rrkS54


	return 0;
}

int mainA6() {
	int num1, num2, num3, temp = -1;

	// We can reduce a hard to easier problems
	// We solve it as separate swap operations

	cin>>num1>>num2>>num3;

	// swap num1, num2
	temp = num2;
	num2 = num1;
	num1 = temp;

	// swap num2, num3
	temp = num3;
	num3 = num2;
	num2 = temp;

	cout<<num1<<" "<<num2<<" "<<num3<<"\n";

	// Another solution by a student. Circulate them instead of direct 2 swaps
	cin>>num1>>num2>>num3;
	temp = num1;
	num1 = num2;
	num2 = num3;
	num3 = temp;

	cout<<num1<<" "<<num2<<" "<<num3<<"\n";


	return 0;
}


int main7a() {
	int a, b;

	cin >> a >> b;

	// Let's code the 2 possible results
	int equ_is_1 = a * a;
	int equ_is_neg_1 = 2 * a + 1;

	// The trick: we want to make them in 1 equation
	// Where if input is: only 1 equation is computed and the second is zer0
	// To do so: convert -1 to 0 and 1 to 1
	// With simple math, we can convert [-1 1] to [0 1] range

	// value 1 for (b 1) and value 0 for (b -1)
	int is_1 = (b + 1) / 2;
	// value 1 for (b -1) and value 0 for (b 1)
	int is_neg_1 = 1 - is_1;

	// Either 1*something + 0*something for b = 1
	// Or     0*something + 1*something for b = -1
	cout<<is_1 * equ_is_1 + is_neg_1 * equ_is_neg_1;

	return 0;
}


int main7b() {
	string name1;
	cout<<"What is student 1 name: ";
	cin>>name1;

	// Although looks as integer, no guarantee (make be big or has letters)
	string id1;
	cout<<"His id: ";
	cin>>id1;

	// Although looks as integer, but grade could be 30.5
	double grade1;
	cout<<"His math exam grade: ";
	cin>>grade1;

	/////////////////////////
	string name2;
	cout<<"What is student 2 name: ";
	cin>>name2;

	string id2;
	cout<<"His id: ";
	cin>>id2;

	double grade2;
	cout<<"His math exam grade: ";
	cin>>grade2;

	cout<<"\nStudents grades in math\n";

	cout<<name1<<" (with id "<<id1<<") got grade: "<<grade1<<"\n";
	cout<<name2<<" (with id "<<id2<<") got grade: "<<grade2<<"\n";
	cout<<"Average grade is "<<(grade1 + grade2) / 2.0<<"\n";

	// Notice we used () to apply this operation first. More later

	return 0;
}

int main() {
	int n;

	cin >> n;

	cout<< n * (n+1) / 2;

	return 0;
}
