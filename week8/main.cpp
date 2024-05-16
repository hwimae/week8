/* A1
#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

void print(Point p) {
    cout << "(" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    Point point;
    point.x = 10;
    point.y = 12;
    print(point);

    return 0;
}

/* A2
#include <iostream>

// Kiểu dữ liệu điểm (Point)
struct Point {
    int x;
    int y;
};

// Hàm tính tổng hai điểm sử dụng tham trị
Point addPointsByValue(Point p1, Point p2) {
    Point result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;
    return result;
}

// Hàm tính tổng hai điểm sử dụng tham biến
void addPointsByReference(Point& p1, Point& p2, Point& result) {
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;
}

int main() {
    Point p1 = {3, 4};
    Point p2 = {5, 2};
    Point sumByValue = addPointsByValue(p1, p2);
    std::cout << "Sum of points by value: (" << sumByValue.x << ", " << sumByValue.y << ")" << std::endl;

    Point sumByReference;
    addPointsByReference(p1, p2, sumByReference);
    std::cout << "Sum of points by reference: (" << sumByReference.x << ", " << sumByReference.y << ")" << std::endl;

    return 0;
}

/* A3
#include <iostream>
using namespace std;

struct Point {
    int x, y;
};

Point mid_point(const Point& p1, const Point& p2) {
    Point mid;
    mid.x = (p1.x + p2.x) / 2;
    mid.y = (p1.y + p2.y) / 2;
    return mid;
}

int main() {
    Point point1, point2;
    point1.x = 2;
    point1.y = 4;
    point2.x = 8;
    point2.y = 10;

    Point mid = mid_point(point1, point2);
    cout << "Mid-point: (" << mid.x << ", " << mid.y << ")" << endl;

    return 0;
}

/* A5
#include <iostream>

struct Point {
    int x;
    int y;
};

struct Rect {
    int x;
    int y;
    int w;
    int h;

    bool contains(const Point& p) const {
        return p.x >= x && p.x <= (x + w) && p.y >= y && p.y <= (y + h);
    }
};

int main() {
    Rect rect = {2, 3, 4, 5};
    Point p1 = {3, 4};
    Point p2 = {6, 7};

    std::cout << "Rect contains p1: " << std::boolalpha << rect.contains(p1) << std::endl;
    std::cout << "Rect contains p2: " << std::boolalpha << rect.contains(p2) << std::endl;

    return 0;
}

/* A6
#include <iostream>
#include <string>
using namespace std;

struct Rect {
    int x, y;
    int width, height;
};

struct Ship {
    Rect rect;
    string id;
    int dx, dy;

    void move() {
        rect.x += dx;
        rect.y += dy;
    }
};

void display(const Ship& ship) {
    cout << "Ship ID: " << ship.id << endl;
    cout << "Position: (" << ship.rect.x << ", " << ship.rect.y << ")" << endl;
}

int main() {
    Ship ship;
    ship.rect.x = 10;
    ship.rect.y = 20;
    ship.rect.width = 100;
    ship.rect.height = 50;
    ship.id = "ABC123";
    ship.dx = 5;
    ship.dy = 3;

    display(ship);
    ship.move();
    display(ship);

    return 0;
}

