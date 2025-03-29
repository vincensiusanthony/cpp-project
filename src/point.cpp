#include <iostream>
#include <cmath>
using namespace std;

class Point {
private:
    double x;
    double y;

public:
    Point(double xCoord = 0.0, double yCoord = 0.0) : x(xCoord), y(yCoord) {}

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    double distanceFromOrigin() const {
        return sqrt(x * x + y * y);
    }
};

int main() {
    Point point(3.0, 4.0);

    cout << "Coordinates: (" << point.getX() << ", " << point.getY() << ")" << endl;
    cout << "Distance from origin: " << point.distanceFromOrigin() << endl;

    Point anotherPoint(-5.0, 12.0);

    cout << "\nAnother Point Coordinates: (" << anotherPoint.getX() << ", " << anotherPoint.getY() << ")" << endl;
    cout << "Distance from origin: " << anotherPoint.distanceFromOrigin() << endl;

    return 0;
}