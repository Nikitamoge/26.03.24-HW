#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;


//Task 1
//struct Point {
//    int x;
//    int y;
//};
//
//void Print(Point point) {
//    cout << point.x << ", " << point.y << ", ";
//}


//Task 2
struct Point {
    int x;
    int y;
};

void Print(Point point) {
    cout << point.x << ", " << point.y << ", ";
}

int main() {
    //Task 1
    /*vector<Point> points = { {1, 2}, {4, 4}, {5, 6}, {7, 8}, {9, 10 } };

    for_each(points.begin(), points.end(), Print);*/


    //Task 2
    list<Point> points = { {1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10} };

    for_each(points.begin(), points.end(), Print);
}
