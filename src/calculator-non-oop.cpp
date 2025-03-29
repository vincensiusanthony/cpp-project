#include <iostream>
using namespace std;

int main () {
    float a,b;
    
    cout << "Number #1:";
    cin >> a;

    cout << "Number #2:";
    cin >> b;

    float addition = a+b;
    float subtraction = a-b;
    float multiplication = a*b;
    float division = a/b;

    cout <<"addition :" << addition << endl;
    cout <<"subtraction :" << subtraction << endl;
    cout <<"multiplication :" << multiplication << endl;
    cout <<"division :" << division << endl;

    return 0;
}