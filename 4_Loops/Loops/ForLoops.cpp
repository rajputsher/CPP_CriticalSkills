#include<iostream>
using namespace std;

int mainF1() {
	int sum = 0;

	for (int x = 1; x < 6; ++x)
		sum += x;

	cout<<sum;

	return 0;
}

int mainF2() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int num, sum = 0;
		cin >> num;

		for (int start = 1; start <= num; ++start)
			sum += start;

		cout << "Sum from 1 to " << num << " = " << sum << "\n";
	}
	return 0;
}

int mainF3() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int num, sum = 0;
		cin >> num;

		int start = 1;
		for (; start <= num;) {
			sum += start;
			++start;
		}

		cout << "Sum from 1 to " << num << " = " << sum << "\n";
	}
	return 0;
}

int mainF4() {
	int T;
	cin >> T;

	for (int t = 0; t < T; ++t) {
		int num, sum = 0;
		cin >> num;

		int start = 1;
		for (; ;) {	// ame as while (true)
			if(!(start <= num))
				break;
			sum += start;
			++start;
		}

		cout << "Sum from 1 to " << num << " = " << sum << "\n";
	}
	return 0;
}

// Practice Programs
int mainFL1() {
	int N, T, value;

	cin >> T;

	while (T--) {
		cin >> N;

		int sum = 0;
		for (int i = 0; i < N; ++i) {
			cin >> value;

			int result = 1;
			for (int j = 0; j < i + 1; ++j)
				result *= value;
			sum += result;
		}
		cout << sum << "\n";
	}

	return 0;
}

int mainFL2a() {
	int n, m, sum;

	cin >> n >> m >> sum;

	int cnt = 0;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j)
			if (i + j == sum)
				cnt++;


	cout << cnt << "\n";

	return 0;
}

int mainFL2b() {
	int n, m, sum;

	cin >> n >> m >> sum;

	int cnt = 0;

	for (int i = 1; i <= n; ++i)
	{
		int j =  sum - i;	// i + j == sum

		if (1 <= j && j <= m)
			cnt++;

	}

	cout << cnt << "\n";

	return 0;
}

#include<iostream>
using namespace std;

int mainFL3a() {
	int n, m, w;

	cin >> n >> m >> w;

	int cnt = 0;

	for (int i = 1; i <= n; ++i)
		for (int j = i; j <= m; ++j)
			for (int k = 1; k <= w; ++k)
				if (i + j <= k)
					cnt++;

	cout << cnt << "\n";

	return 0;
}


int mainFL3b() {
	int n, m, w;

	cin >> n >> m >> w;

	int cnt = 0;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j) {
			int k = i + j;

			if (1 <= k && k <= w)
				cnt += w - k + 1;
	}

cout << cnt << "\n";

return 0;
}

int mainFL4a() {
	int n = 10;

	int a = 0, b = 1;

	cout<<a<<" "<<b<<" ";

	for (int a = 0, b = 1, cnt = 2; cnt < n; ++cnt) {
		int c = a+b;
		a = b;
		b = c;

		cout<<c<<" ";
	}

	return 0;
}


int mainFL4b() {
	int n = 10;

	for (int a = 0, b = 1, c = -1, cnt = 0; cnt < n;
			++cnt, c = a + b, a = b, b = c)
		cout << a << " ";

	return 0;
}

