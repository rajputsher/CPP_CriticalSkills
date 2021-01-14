#include<iostream>
using namespace std;

int mainAW1() {
	int start,endnum;

	cin>>start>>endnum;

	while(start <= endnum)
	{
		cout<<start<<"\n";
		start++;
	}

	return 0;
}

int mainAW2() {
	int num;
	char ch;
    cout<<"Enter the number of times the character should be printed: ";
	cin>>num;
	cout<<"Enter the Character to be printed: ";
	cin>>ch;
    cout<<"Output:"<<endl;
	while(num > 0)
	{
		cout<<ch;
		num -= 1;
	}

	return 0;
}

int mainAW3() {
	int N;
    cout<<"Enter the number of rows needed in left handed triangle : ";
	cin >> N;

	int row = 1;
	while (row <= N) {
		int stars_count = 1;

		while (stars_count <= row) {
			cout << '*';
			++stars_count;
		}
		cout << "\n";
		row++;
	}

	return 0;
}

int mainAW4() {
	int N;
	cout<<"Enter the number of rows needed in left handed triangle face down: ";
	cin >> N;

	int row = N;
	while (row > 0) {
		int stars_count = 1;

		while (stars_count <= row) {
			cout << '*';
			++stars_count;
		}
		cout << "\n";
		row--;
	}

	return 0;
}

int mainAW5() {
	int N;
    cout<<"Enter the number of rows needed in a Diamond: ";
	cin >> N;

	/*
	 * Let's print the upper triangle first
	 * Let's assume N = 4, how many spaces and starts we print
	 * Row 1	Spaces 3	Stars 1
	 * Row 2	Spaces 2	Stars 3
	 * Row 3	Spaces 1	Stars 5
	 * Row 4	Spaces 0	Stars 7
	 *
	 * Now we wanna develop formulas for number of spaces and number of starts
	 * For a given 'row'
	 * 	Spaces are: N - rows   	(3, 2, 1, 0)
	 * 	Starts are: 2*row -1	(1, 3, 5, 7)
	 *
	 * Now we just iterate for each row
	 * 	print spaces
	 * 	then print starts
	 */
	int row = 1;
	while (row <= N) {
		int stars_count = 1;

		// Print N - rows spaces
		while (stars_count <= N-row) {
			cout << ' ';
			++stars_count;
		}

		// Print 2*rows-1 stars
		stars_count = 1;
		while (stars_count <= 2*row-1) {
			cout << '*';
			++stars_count;
		}
		cout << "\n";
		++row;
	}

	/*
	 * Let's print the lower triangle second
	 * Same logic, we just switch looping from N to 1
	 */
	row = N;
	while (row >= 1) {
		int stars_count = 1;

		while (stars_count <= N-row) {
			cout << ' ';
			++stars_count;
		}

		stars_count = 1;

		while (stars_count <= 2*row-1) {
			cout << '*';
			++stars_count;
		}
		cout << "\n";
		--row;
	}
	return 0;
}

int mainAW6() {
	int N;
    cout<<"How many entries?: ";
	cin >> N;

	// Use doubles to: 1) allow any values 2) get average correctly
	double even_sum = 0, odd_sum = 0;
	int even_count = 0, odd_count = 0;

	int cnt = 1;
	while (cnt <= N) {
		double value;
		cin >> value;

		if (cnt % 2 == 0)	// even position
			even_sum += value, even_count++;
		else				// odd position
			odd_sum += value, odd_count++;

		cnt++;
	}

	cout <<"Average of odd entries: "<<odd_sum / odd_count << "\n";
	cout<<"Average of even entries: "<< even_sum / even_count << "\n";

	return 0;
}

int mainAW7() {
	int N, result = 0;
    cout<<"Enter a number: ";
	cin >> N;

	int cnt = 0;
    cout<<"These are the number divisible by 8 or by both (4 and 3): \n";
	while (cnt <= N)
	{
		if (cnt % 8 == 0 || (cnt % 3 == 0 && cnt % 4 == 0))
			cout<<cnt<<" ";

		cnt ++;
	}

	return 0;
}


int mainA8a() {
	int N, result = 0;
    cout<<"Enter a number: ";
	cin >> N;

	int cnt = 0;
	int current_number = 0;
    cout<<"These are the first "<<N<<" numbers that are multiple of 3 but not multiple of 4: ";
	while (cnt < N) {
		if (current_number % 3 == 0 && current_number % 4 != 0) {
			cout << current_number << " ";
			cnt++;
		}
		current_number++;
	}
	return 0;
}

// Another efficient solution


int mainAW8() {
	int n;
	cout<<"Enter a number: ";
	cin >> n;

	int start = 3;
	cout<<"These are the first "<<n<<" numbers that are multiple of 3 but not multiple of 4: ";
	while (n) {
		if(start % 4 != 0)	// make sure multiple of 4 too
			--n, cout<<start<<" ";
		start += 3;	// increment with 3: is multiple of 3
	}

	return 0;
}

int mainAW9() {
	int N;
    cout<<"How many strings will you enter? : ";
	cin >> N;

	int pos = 0;
    cout<<"Enter "<< N<<" strings: \n";
	while (pos < N) {
		string str;
		cin>>str;

		// there are 8 different ways to make 2 letters no in lower/upper cases
		if (str == "no" || str == "No" || str == "nO" || str == "NO" ||
			str == "on" || str == "oN" || str == "On" || str == "ON")
			cout<<str<<" ";

		pos++;
	}
	return 0;
}

int mainAW10() {
	int N;
    cout<<"Enter the number to reverse: ";
	cin >> N;

	int number = 0;

	while (N > 0) {
		int last_digits = N % 10;
		N /= 10;	// remove last digit

		number = number * 10 + last_digits;
	}
	cout <<"Reverse of "<<N<<" is: "<< number<<endl;
	cout << "3*"<<number<<" is: " << number * 3 << "\n";

	return 0;
}


int mainAW11() {
	int T;
    cout<<"How many number of test sets will you enter: ";
	cin >> T;
    int x=0;
	while (T > 0) {
		int N;
		cout<<"How many numbers are in the test set-"<< ++x<<"? : ";
		cin >> N;

		int pos = 0;
		int result;
        cout<<"\nEnter the numbers: \n";
		while (pos < N) {
			int value;
			cin >> value;

			if (pos == 0)
				result = value;
			else if (result > value)
				result = value;

			pos++;
		}
		cout<<"\nMinimum of the test set-"<<x<<" is: ";
		cout<<result<<"\n";

		--T;
	}

	return 0;
}

int mainAW12() {
	int n, m;
    cout<<"Enter 2 numbers : ";
	cin >> n >> m;

	int cnt_n = 1;

	while (cnt_n <= n) {
		int cnt_m = 1;

		while (cnt_m <= m) {
			cout << cnt_n << " x " << cnt_m << " = " << cnt_n * cnt_m << "\n";
			cnt_m++;
		}
		cnt_n++;
	}

	return 0;
}

int mainAW13() {
	int T;

	cin >> T;

	/**
	 * We need 3 nested loops
	 * loop over test cases
	 * 	loop over reading numbers
	 * 	  loop to repeat the number K times (multiplication)
	 */

	while (T > 0) {
		int N;
		cin >> N;

		int cnt_N = 1;
		int sum = 0;
		while (cnt_N <= N) {
			int value = 0;
			cin >> value;

			int cnt_deep = cnt_N;
			int result = 1;

			while (cnt_deep > 0)
				result *= value, cnt_deep--;

			sum += result;
			cnt_N++;
		}
		cout<<sum<<"\n";

		T--;
	}

	return 0;
}



