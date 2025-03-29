#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int id;
    double grade;

public:
    Student(string n, int i, double g) : name(n), id(i), grade(g) {}

    string getName() const {
        return name;
    }

    int getID() const {
        return id;
    }

    double getGrade() const {
        return grade;
    }

    void setName(const string& n) {
        name = n;
    }

    void setID(int i) {
        id = i;
    }

    void setGrade(double g) {
        grade = g;
    }

    void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student student("Vincensius Anthony", 001, 3.50);

    cout << "Student Information:" << endl;
    student.displayInfo();

    student.setGrade(3.72);

    cout << "\nUpdated Student Information:" << endl;
    student.displayInfo();

    return 0;
}