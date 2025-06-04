#include <iostream>
using namespace std;
int main(){
int principal, rate, time;
float simpleInterest;

cout << "Enter the principal amount: ";
cin >> principal;
cout << "Enter the rate of interest: ";
cin >> rate;
cout << "Enter the time in years: ";
cin >> time;

simpleInterest = (principal * rate * time) / 100;

cout << "Simple Interest is: " << simpleInterest << endl;

return 0;
}