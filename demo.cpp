//
// Created by Dmitry Morozov on 7/8/22.
//
#include <vector>
#include <iostream>
#include <algorithm>


class Point {
public:
    int x;
    int y;
};

std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

std::vector<Point> dataFrame = {
        Point{1, 20},
        Point{2, 19},
        Point{3, 18},
        Point{4, 17},
        Point{5, 16},
        Point{6, 15},
        Point{7, 14},
        Point{8, 13},
        Point{9, 12},
        Point{10, 11},
        Point{11, 10},
        Point{12, 9},
        Point{13, 8},
        Point{14, 7},
        Point{15, 6},
        Point{16, 5},
        Point{17, 4},
        Point{18, 3},
        Point{19, 2},
        Point{20, 1},

};

void printDataFrame (const std::vector<Point> &dF) {
    for (auto &point: dF) {
        std::cout << "(" << point.x << ", " << point.y << ")" << std::endl;
    }
}
bool cmp (const Point &a, const Point &b) {
    return a.x < b.x;
}

int main () {
    // Default sorting

//
//    std::sort (numbers.begin (), numbers.end (),  [] (int a, int b) {
//        return a < b;
//    });
//
//    for (auto i: numbers) {
//        std::cout << i << std::endl;
//    }

    std::sort (dataFrame.begin (), dataFrame.end (), cmp);

    printDataFrame (dataFrame);


    return 0;
}


