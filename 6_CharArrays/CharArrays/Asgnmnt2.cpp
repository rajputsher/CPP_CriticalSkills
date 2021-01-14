#include <iostream>
#include <string>
using namespace std;

/*
Read a string of letters and then compress each group of same letter
E.g. if the sub-string is cccc ⇒ c4
Use _ between each group

Input ⇒ Outputs
ccccDDDxxxxxxxxe ⇒ c4_D3_x8_e1
Xxxxxxxx ⇒ x8
*/

int mainA7()
{
    string input;
    cin >> input;
    int len = input.size() , cnt = 1;
    for(int i = 1 ; i < len ; i++){
        /**
            if the current character is equal previous character
            then they are in same group and we need increment count by 1

            otherwise they are in Different groups and we need print last group
            and start count 1
        */
        if(input[i-1] != input[i]){
            cout << input[i-1] << cnt << "_";
            cnt = 1;
        }else cnt++;
    }
    /// print last group
    cout << input[len-1] << cnt << "\n";
    return 0;
}

/*
Read 2 strings, then output YES if the first smaller than or equal to second.
Otherwise, output NO
- Don’t use < operator to compare strings. Use loops


Input ⇒ Output

aaa aaa ⇒ YES
aaaaa aa ⇒ NO
abc d ⇒ YES
dddddddddddddd xyz ⇒ YES
azzzzzzzz za ⇒ YES
za azzzzzzzz ⇒ NO
*/

int mainA8() {
	string a, b;

	cin >> a >> b;

	int sz = a.size();

	if (sz < b.size())
		sz = b.size();

	int smaller = -1;

	for (int i = 0; smaller == -1 && i < sz; ++i) {
		if (a[i] != b[i]) {
			if (a[i] < b[i])
				smaller = 0;
			else
				smaller = 1;
		}
	}
	if (smaller == -1) { // then the first letters are common. Small in length is smaller
		if (a.size() <= b.size())
			smaller = 0;
		else
			smaller = 1;
	}
	if (smaller == 0)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}


/*
Read a very long string of digits (at least 6 digits), and add 5555 to it.
Don’t convert to integer, as integer has max limit for values
*/
int mainA9() {
	string num;

	// Guarantee input: must be 6 digits or more
	cin >> num;

	int sz = num.size();

	int carry = 0;
	for (int i = 0; i < sz; ++i) {
		int digit = num[sz - 1 - i] - '0';

		if (i < 4)
			digit += 5;			// add 5 in first 4 times
		digit += carry;		// add any carry

		if (digit >= 10)
			digit -= 10, carry = 1;
		else
			carry = 0;

		num[sz - 1 - i] = digit + '0';
	}
	if(carry)
		cout<<1;
	cout << num;

	return 0;
}


/*
Help our factory in managing his employees. Create a program that does the
following:
Display the following choices:
Enter your choice:
1) Add new employee
2) Print all employees
3) Delete by age
4) Update Salary by name
You will keep the program running forever. Display the choices and user input from 1 to 4
*/


int mainA10() {
	//freopen("c.in", "rt", stdin);

	const int MAX = 10000;

	string names[MAX];
	int ages[MAX];
	double salaries[MAX];
	char genders[MAX];
	int added = 0;	// Number of employees

	while (true) {
		int choice = -1;
		cout << "\nEnter your choice:\n";
		cout << "1) Add new employee\n";
		cout << "2) Print all employees\n";
		cout << "3) Delete by age\n";
		cout << "4) Update Salary by name\n";

		cin >> choice;

		//if (cin.fail())			break;

		if (!(1 <= choice && choice <= 4)) {
			cout << "Invalid choice. Try again\n";
			continue;
		}

		if (choice == 1) {
			cout << "Enter name: ";
			cin >> names[added];

			cout << "Enter age: ";
			cin >> ages[added];

			cout << "Enter salary: ";
			cin >> salaries[added];

			cout << "Enter gender (M/F): ";
			cin >> genders[added];
			++added;
		} else if (choice == 2) {
			cout << "****************************\n";
			for (int i = 0; i < added; ++i) {
				if (ages[i] != -1)
					cout << names[i] << " " << ages[i] << " " << salaries[i]
							<< " " << genders[i] << "\n";
			}
		} else if (choice == 3) {
			cout << "Enter start and end age: ";
			int start, end;
			cin >> start >> end;

			for (int i = 0; i < added; ++i) {
				if (start <= ages[i] && ages[i] <= end)
					ages[i] = -1;// Let's mark a removed entry with -1 (lazy delete)
			}
		} else {
			cout << "Enter the name and salary: ";
			string name;
			int salary;
			cin >> name >> salary;

			bool is_found = false;
			for (int i = 0; i < added; ++i) {
				if (ages[i] != -1 && names[i] == name) {
					is_found = true;
					salaries[i] = salary;
					break;
				}
			}
			if (!is_found)
				cout << "No employee with this name!\n";
		}
	}
	return 0;
}

