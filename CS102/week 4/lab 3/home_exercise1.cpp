#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

struct Rect {
    Point p[4];
};

int main() {
    Rect rectangle;

    cout << "Enter Point 1: ", cin >> rectangle.p[0].x >> rectangle.p[0].y;
    cout << "Enter Point 4: ", cin >> rectangle.p[3].x >> rectangle.p[3].y;

    rectangle.p[1].x = rectangle.p[3].x, rectangle.p[1].y = rectangle.p[0].y;
    rectangle.p[2].x = rectangle.p[0].x, rectangle.p[2].y = rectangle.p[3].y;

    cout << "Point 2: " << rectangle.p[1].x << " " << rectangle.p[1].y << endl;
    cout << "Point 3: " << rectangle.p[2].x << " " << rectangle.p[2].y << endl;

    int length = rectangle.p[1].x - rectangle.p[0].x, width = rectangle.p[1].y - rectangle.p[3].y;

    int area = length * width;

    cout << "Area is " << area;

    return 0;
}