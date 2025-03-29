#include <iostream>
#include <cmath>

std::pair<double, double> createPoint(double x, double y) {
    return {x, y};
}


double getX(const std::pair<double, double>& point) {
    return point.first;
}

double getY(const std::pair<double, double>& point) {
    return point.second;
}

double distanceFromOrigin(const std::pair<double, double>& point) {
    double x = getX(point);
    double y = getY(point);
    return std::sqrt(x * x + y * y);
}

int main() {
    auto point = createPoint(3.0, 4.0);

    double distance = distanceFromOrigin(point);

    std::cout << "The distance from the origin is: " << distance << std::endl;

    return 0;
}