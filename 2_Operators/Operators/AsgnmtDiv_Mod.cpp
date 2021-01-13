#include<iostream>
using namespace std;

int mainDM1() {

	int num;
	cin >> num;

	// Is even using %2
	bool is_even1 = (num % 2 == 0);

	// is even using /2
	double by2 = (double) num / 2.0;// this is either X.0 or X.5  (try 10, 11)
	by2 = by2 - (int) by2;// Remove X. This is now either 0 (for even) or 0.5 (for odd)
	bool is_even2 = by2 == 0;

	// is even using %10
	int last_digit = num % 10;	// even last digit is 0, 2, 4, 6, 8
	bool is_even3 = last_digit == 0 || last_digit == 2 || last_digit == 4 || last_digit == 6 || last_digit == 8;

	return 0;
}

int mainDM2() {

	double a1, a2, a3, a4, a5;
	cin >> a1 >> a2 >> a3 >> a4 >> a5;

	double avg1 = (a1+a2+a3+a4+a5) / 5.0;	// A
	double sum1 = (a1+a2+a3) / (a4+a5);		// B
	double first3_avg = (a1+a2+a3) / 3.0;
	double last2_avg = (a4+a5) / 2.0;
	double avg2 = first3_avg / last2_avg;	// C

	cout<<avg1<<"\n";
	cout<<sum1<<"\n";
	cout<<avg2<<"\n";

	cout<<sum1 * 2.0/3.0<<"\n";		// C = 2/3 B

	return 0;
}

int mainDM3() {

	int n;
	cin >> n;

	int last1 = n % 10;
	n /= 10;

	int last2 = n % 10;
	n /= 10;

	int last3 = n % 10;
	n /= 10;

	cout << last1 + last2 + last3 << "\n";

	return 0;
}

int mainDM4() {

	int n;
	cin >> n;

	// /1000 => removes last 3 digits
	// %10 get next digit = 4th
	cout << (n / 1000) % 10 << "\n";

	return 0;
}

int mainDM5() {

	double a, b;
	cin>>a>>b;

	double result = a/b;

	cout<<result - (int)result;

	return 0;
}

int mainDM6() {

	int n, m;
	cin >> n >> m;

	// let's try 13/5
	// 13/5 = 2  [2 complete units, each is 5]
	// 2*5 = 10  [total complete units]
	// Reminder is 13-10 = 3. This number generates the fractional part
	int result = n - (n / m) * m;

	cout << result << " " << n % m << "\n";

	return 0;
}

int mainDM7() {

	int n;
	cin >> n;

	int is_even = n % 2 == 0;
	int is_odd = 1 - is_even;

	// formula of 2 parts: only one of them will be activated
	int result = is_even * 100 + is_odd * 7;

	cout<<result<<"\n";



	return 0;
}


int mainDM8() {

	int days;

	cin >> days;

	int years = days / 360;
	days = days % 360;	// now we remove # of complete years

	int months = days / 30;
	days = days % 30;

	cout<<years<<" "<<months<<" "<<days<<"\n";


	return 0;
}
