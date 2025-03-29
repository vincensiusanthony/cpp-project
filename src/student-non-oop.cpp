#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    string name;
    double iD;
    float grade;
    
    cout <<"Name :";
    getline (cin, name);

    cout <<"ID :";
    if (!(cin >> iD)) {
        cout <<"Invalid ID Entered. Exiting."<< endl;
        return 1;
    }
    
    grade = 3.72;
    cout << fixed << setprecision(2);
    cout <<"Grade :"<< grade << endl;

    return 0;
}