#include<iostream>
using namespace std;

int mainQ1() {
	const int SIZE = 5;
	//int numbers[SIZE] { 1, 2, 4, 3, 10, 20 }; //error: Too many initializers
    int numbers[SIZE] { 1, 2, 4, 3, 10};
	int cnt = 0;

	for (int i = 1; i < SIZE; ++i) {
		if (numbers[i - 1] < numbers[i] && numbers[i] < numbers[i + 1])
			cnt++;
	}
	cout << cnt << "\n";

	return 0;
}

//The loop reads an integer outside the array. The value will be garbage so it depends. Note, this typically won't cause a run-time error. It is a close index from the array and only reading.
int mainQ2() {
	const int SIZE = 5;
	int numbers[SIZE] { 1, 2, 4, 3, 10 };

	int cnt = 0;

	for (int i = 1; i < SIZE; ++i) {
		if (numbers[i - 1] < numbers[i] && numbers[i] < numbers[i + 1])
			cnt++;
	}
	cout << cnt << "\n";

	return 0;
}

int mainQ3() {
	const int SIZE = 5;
	int numbers[SIZE] { 1, 2, 4, 3, 10 };

	int cnt = 0;

	for (int i = 1; i < SIZE -1; ++i) {
		if (numbers[i - 1] < numbers[i] && numbers[i] < numbers[i + 1])
			cnt++;
	}
	cout << cnt << "\n";
	//cout<<numbers[100];

	return 0;
}


int mainQ4()
{

    int arr[10]{};
    int x = arr[-3];
    cout<<"bye";
    return 0;
}



int mainQ5()
{

    int arr[10]{};
    int x = arr[-10000000];//segmentation fault : core dumped
    cout<<"bye";
    return 0;
}
