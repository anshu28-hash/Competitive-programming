#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x;
    double y;
};

double calculateDistance(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    Point p1 = {0.0, 0.0};
    Point p2 = {3.0, 4.0};

    double distance = calculateDistance(p1, p2);
    cout << "Distance: " << distance << endl;

}