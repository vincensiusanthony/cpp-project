#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double getLength() const {
        return length;
    }

    double getWidth() const {
        return width;
    }

    void setLength(double l) {
        length = l;
    }

    void setWidth(double w) {
        width = w;
    }

    double calculateArea() const {
        return length * width;
    }
};

int main() {
    Rectangle rect(5.0, 3.0);

    cout << "Initial Dimensions:" << endl;
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Area: " << rect.calculateArea() << endl;

    rect.setLength(7.0);
    rect.setWidth(4.0);

    cout << "\nUpdated Dimensions:" << endl;
    cout << "Length: " << rect.getLength() << endl;
    cout << "Width: " << rect.getWidth() << endl;
    cout << "Area: " << rect.calculateArea() << endl;

    return 0;
}