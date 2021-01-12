#include<iostream>
using namespace std;

int mainL1() {
	int age {30}, salary {7000};

	bool result = (age > 25) && (salary < 8000);
	cout<<result<<"\n";

	cout<<(  (age > 25) && (salary > 9000) )<<"\n";

	cout<<(  (age > 35) || (salary < 8500) )<<"\n";
	cout<<(  (age > 35) || (salary > 9000) )<<"\n";

	return 0;
}

int mainL2() {
	int age {30}, salary {7000}, weight {110};

	cout<<(  (age > 25) && (salary < 8000) && (weight < 150) )<<"\n";
	cout<<(  (age > 25) && (salary < 8000) && (weight > 200) )<<"\n";

	cout<<(  (age > 35) || (salary > 6000) || (weight > 200) )<<"\n";

	cout<<(  (age > 35) && (salary > 6000) || (weight > 200) )<<"\n";
	cout<<(  (age > 20) && (salary > 6000) || (weight > 200) )<<"\n";

	return 0;
}

int mainL3() {
	int age {30}, salary {7000}, weight {110};

	// ANDs are evaluated
	cout << ( age > 35 || salary > 6000  && weight > 200) << "\n";

	// () are evaluated FIRST even before some ANDS
	cout << ((age > 35 || salary > 6000) && weight > 200) << "\n";

	return 0;
}

int mainL4() {

	int x { 10 };

	// (x+= 50 > 10) is discarded
	x < 100 || (x+= 50 > 10);

	// (++x > 10) is discarded
	x == 20 && (++x > 50);

	// (++x > 10) is discarded, but (x > 0) eval
	(x == 20) && (++x > 50) || (x > 0);

	// X still 10
	// All evaluated
	(x == 10) && ((++x > 50) || (x > 0));

	// X now 11

	return 0;
}

