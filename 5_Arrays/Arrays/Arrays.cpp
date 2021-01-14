#include<iostream>
using namespace std;

int mainA1() {
	const int size = 5;

	// Declare 5 positions of type integer
	int numbers[size] = {10, 2, 7, 5, 3};


	numbers[0] = 9;
	numbers[2] *= 3;
	numbers[4]++;

	cout<<numbers[4];

	return 0;
}

//Printing array forward and backward
int mainA2(){

    const int size= 5;

    int numbers[size] = {1,2,3,4,5};

    cout<<"Arrays in normal order: ";
    for(int i =0;i<size;i++)
        cout << numbers[i]<<" ";
    cout<<"\n";

    cout<<"Arrays in reverse order: ";
    for(int i = 0; i<size; ++i)
        cout<<numbers[size-i-1]<< " ";
    cout<<"\n";

    cout<<"Arrays in reverse order: ";
    for(int i =size-1;i>=0;i--)
        cout << numbers[i]<<" ";
    cout<<"\n";

    return 0;
}

//Read 5 numbers and find minimum

int mainA3()
{
    const int size = 5;

    int numbers[size];
    cout<<"Enter 5 numbers: \n";
    for(int i=0; i<size; i++)
        cin>>numbers[i];

    int minimum = numbers[0];
    for(int i = 0; i<size;i++)
        if(minimum >numbers[i])
            minimum = numbers[i];

    cout<<"Minimum of the entered number is: "<<minimum;
}

int mainA4(){
    int val1=100;
    int val2{100};

    int arr1[100]={5}; // c-style
    int arr2[100]{5}; // c++ initialization style

    int arr3[]{1,2,3};//auto size
    cout<<sizeof(arr3[0]);
}

// Array Practice

/*

Read an Integer N ( < 200), then read N (distinct) integers. Find the maximum
and 2nd maximum values
Input: 5 10 20 3 30 7
Output 30 20

*/


int mainA5() {
	int n, numbers[200];	// max expected size
    cout<<"How many entries will you enter: ";
	cin>>n;
	cout<<"Enter "<<n<<" numbers: \n";
	for (int i = 0; i < n; ++i)
		cin >> numbers[i];

	int maximum_idx = 0;
	for (int i = 1; i < n; ++i)
		if (numbers[maximum_idx] < numbers[i])
			maximum_idx = i;

	int max1 = numbers[maximum_idx];
	numbers[maximum_idx] = -1000000;	// assume good value

	maximum_idx = 0;	// same code again
	for (int i = 1; i < n; ++i)
		if (numbers[maximum_idx] < numbers[i])
			maximum_idx = i;

	int max2 = numbers[maximum_idx];
	cout <<"First maximum: "<< max1 << "\n Second maximum: " << max2;
	return 0;
}

// Simplified way

int mainA6() {
	int n, numbers[200];	// max expected size
	cout<<"How many numbers will you enter: ";
	cin >> n;
	cout<<"Enter "<<n<<" numbers: \n";
	for (int i = 0; i < n; ++i)
		cin >> numbers[i];

	int max1, max2;
	if (numbers[0] >= numbers[1])
		max1 = numbers[0], max2 = numbers[1];
	else
		max1 = numbers[1], max2 = numbers[0];

	for (int i = 2; i < n; ++i)
		if (max1 <= numbers[i])
			max2 = max1, max1 = numbers[i];
		else if (max2 < numbers[i])
			max2 = numbers[i];

	cout <<"First maximum: "<< max1 << "\n Second maximum: " << max2;
	return 0;
}

/*
Read an Integer N, then read N <= 200 (distinct) integers. Find a pair of
numbers (e.g. 2 different indices) whose sum is maximum
Input: 5 2 10 3 50 15
⇒ 65
(from 50 + 15)
*/

//This solution has 2 bugs
int mainA7() {
	int n, numbers[200];

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> numbers[i];

	int idx1 = -1, idx2 = -1;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) { //Bug 1:j should not start with 0 , solution j =i+1
			if (idx1 == -1)
				idx1 = i, idx2 = j;
			else if (numbers[idx1] + numbers[idx2] <
					 numbers[i] + numbers[j])
				idx1 = i, idx2 = j;
		}
	}
	cout<<numbers[idx1]<<" "<<numbers[idx2];

	return 0;
}

int mainA8() {
	int n, numbers[200];

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> numbers[i];

	int idx1 = -1, idx2 = -1;

	for (int i = 0; i < n; ++i) {
		for (int j = i+1; j < n; ++j) {
			if (idx1 == -1)
				idx1 = i, idx2 = j;
			else if (numbers[idx1] + numbers[idx2] <
					 numbers[i] + numbers[j])
				idx1 = i, idx2 = j;
		}
	}
	cout<<numbers[idx1]<<" "<<numbers[idx2];
    cout<<"\nSum of 2 maximum numbers is: "<< numbers[idx1]+numbers[idx2];
	return 0;
}

/*
Read an Integer N, then read N <= 200 integers.
In-place: Change the current array, don’t use 2 arrays
*/

/*
Iterate from the begin and end in same time
- Swap the 2 positions
- Do this till the middle only
*/

int mainA9() {
	int n, numbers[200];

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> numbers[i];

	for (int i = 0; i < n/2; ++i) {
		int last = n - i - 1;
		// swap positions: i and last
		int temp = numbers[i];
		numbers[i] = numbers[last];
		numbers[last] = temp;
	}

	for (int i = 0; i < n; ++i)
		cout<<numbers[i]<<" ";
	return 0;
}

// Find the most frequent number

//Method1:
int mainA10() {
	int n, numbers[200];

	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> numbers[i];

	int max_value = -1, max_repeat = -1;

	for (int i = 0; i < n; ++i)
	{
		// count how many times numbers[i] exists
		int repeat = 0;
		for (int j = 0; j < n; ++j)
			repeat += numbers[i] == numbers[j];

		if (max_repeat == -1 || max_repeat < repeat)
			max_repeat = repeat, max_value = numbers[i];
	}
	cout<<max_value<<" repeated "<<max_repeat<<" times";

	return 0;
}


//Method2:

int mainA10b() {
	int n, numbers[200];

	// Be careful: max value is 150.
	// So we need to access the array at 150
	int frequency[150+1] = {0};	// {0} set all to zeros

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> numbers[i];
		frequency[numbers[i]]++;
	}

	// just find max position in the array
	int max_pos = -1;

	for (int i = 0; i < 151; ++i)	// Iterate on ALL array
	{
		if (max_pos == -1 || frequency[max_pos] < frequency[i])
			max_pos = i;
	}
	cout<<max_pos<<" repeated "<<frequency[max_pos]<<" times";

	return 0;
}

