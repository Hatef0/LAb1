#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    float weight, height, bmi;

    cout << "Enter your weight (kg): ";
    cin >> weight;

    cout << "Enter your height (m): ";
    cin >> height;

    bmi = weight / (height * height);

    cout << fixed << setprecision(2);
    cout << "Your BMI is " << bmi << endl;

    return 0;
}
