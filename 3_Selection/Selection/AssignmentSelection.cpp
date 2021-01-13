#include<iostream>
using namespace std;

int mainA1() {
	int a, b;
	cin >> a >> b;

	bool is_a_even = (a % 2 == 0);
	bool is_b_even = (b % 2 == 0);

	if (!is_a_even && !is_b_even)
		cout << a * b << "\n";
	else if (is_a_even && is_b_even)
		cout << a / b << "\n";
	else if (!is_a_even && is_b_even)
		cout << a + b << "\n";
	else
		cout << a - b << "\n";

	return 0;
}

int mainA2() {
	int a, b, c, tmp;
	cin >> a >> b >> c;

	if (b < a) { // Swap them

		tmp = a;
		a = b;
		b = tmp;
	}
	// Now a, b are correct

	if (c < b) { // Swap them

		tmp = b;
		b = c;
		c = tmp;

		// Now b, c are correct
		// But a, b may not be again

		if (b < a) {	// Swap them{
			tmp = a;
			a = b;
			b = tmp;
		}
	}
	cout<<a<<" "<<b<<" "<<c<<"\n";

	return 0;
}

// Assume all integers are >= 0

int mainA3() {
	int a, b, c, tmp;
	cin >> a >> b >> c;

	int res = -1;

	if (a < 100 && a > res)
		res = a;

	if (b < 100 && b > res)
		res = b;

	if (c < 100 && c > res)
		res = c;

	cout<<res<<"\n";

	return 0;
}


int mainA4() {
	int a, b, c, tmp;
	cin >> a >> b >> c;

	int res = -1;

	// The next 3 if conditions: let's try to initalize res correctly
	if (a < 100)
		res = a;

	if (b < 100)
		res = b;

	if (c < 100)
		res = c;

	// The next 3 if conditions: let's get the valid max
	if (a < 100 && a > res)
		res = a;

	if (b < 100 && b > res)
		res = b;

	if (c < 100 && c > res)
		res = c;

	cout<<res<<"\n";

	return 0;
}

// Try -20 -10 -30

int mainA5() {
	int x, a1, a2, a3, a4, a5;

	cin >> x >> a1 >> a2 >> a3 >> a4 >> a5;

	int cnt = 0;

	cnt += (a1 <= x);
	cnt += (a2 <= x);
	cnt += (a3 <= x);
	cnt += (a4 <= x);
	cnt += (a5 <= x);

	cout << cnt << " " << 5 - cnt << "\n";

	return 0;
}

int mainA6() {
	int result, num;

	cin>>result;	// First number

	// Read 9 times and maximize
	cin>>num;	if(result < num)	result = num;
	cin>>num;	if(result < num)	result = num;
	cin>>num;	if(result < num)	result = num;
	cin>>num;	if(result < num)	result = num;
	cin>>num;	if(result < num)	result = num;
	cin>>num;	if(result < num)	result = num;
	cin>>num;	if(result < num)	result = num;
	cin>>num;	if(result < num)	result = num;
	cin>>num;	if(result < num)	result = num;

	cout<<result;

	return 0;
}


int mainA7() {
	int cnt, result, num;

	cin>>cnt;

	cin>>result;	// First number
	cnt -= 1;

	// Read  times and maximize
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}

	cout<<result;

	return 0;
}

int mainA8() {
	int x, start, end, cnt = 0;

	cin>>x;

	//Read start and end, then see if X is between them or not, 3 times
	cin>>start>>end;
	cnt += (start <= x && x <= end);

	cin>>start>>end;
	cnt += (start <= x && x <= end);

	cin>>start>>end;
	cnt += (start <= x && x <= end);

	cout<<cnt<<"\n";

	return 0;
}


int mainA9() {
	int s1, e1, s2, e2;

	cin >> s1 >> e1 >> s2 >> e2;

	if(e1 < s2 || e2 < s1)
		cout<<-1<<"\n";		// One of them ends before start of the another
	else
	{
		// This is tricky. Trying to list all cases will be hard and buggy
		// You need to notice which ones came first
		// Then consider the possible cases (e.g. one of them completely inside the second)

		// However, more thinking makes it easier
		// The intersection starts at the maximum of the starts
		// The intersection ends at the minimum of the ends
		// Draw some examples

		if(s1 < s2)	s1 = s2;	// maximum of (s1, s2)
		if(e1 > e2) e1 = e2;	// minimum of (e1, e2)

		cout<<s1<<" "<<e1<<"\n";
	}
	/*
	Cases
	1 15  20 30		==> -1
	20 30 1 15		==> -1
	1 6    1 6		==> 1 6
	1 6    1 3		==> 1 3
	1 6    2 3		==> 2 3
	1 6    3 8		==> 3 6
	3 8    1 6		==> 3 6

	*/
	return 0;
}


