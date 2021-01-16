#include <iostream>
using namespace std;

int sum1n(int n){
    return n*(n+1)/2;
}

int mainE1(){
    int n;
    cout<<"Enter the values of n: ";
    cin>>n;
    cout<<"Sum of 1 to "<<n<<" is: "<<sum1n(n);
}
