#include <iostream>
using namespace std;
int main() {
    float C;
    cout << "Enter temperature in Celsius: ";
    cin >> C;

    float F = (C * 9 / 5) + 32;

    cout << " Fahrenheit: " << F << endl;

    return 0;
}