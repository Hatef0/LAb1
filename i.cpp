#include <iostream>
using namespace std;

int main() {
    float num1, num2, num3, average;

    cout << "Enter three number1: ";
    cin >> num1;
    cout << "Enter three number2: ";
    cin >> num2;
    cout << "Enter three number3: ";
    cin >> num3;

    average = (num1 + num2 + num3) / 3;

    cout << "The average is :  " << average << endl;

    return 0;
}