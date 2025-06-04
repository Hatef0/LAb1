#include <iostream>
using namespace std;
int main(){
    float Num;
    cout << "Enter the radius of a circle : ";
    cin >> Num;

    float a = Num * Num * 3.14;
    cout << "Area :  " << a << endl;

    return 0;
}