#ifndef LINE_H_INCLUDED
#define LINE_H_INCLUDED

#include <iostream>
#include "Point.h"

using namespace std;

class Line
{
private:
    Point p1, p2;

public:
    Line();
    Line(const Point& pt1, const Point& pt2);
    Line(const Line& source);
    virtual ~Line();

    Point start() const;
    Point finish() const;

    void start(const Point& pt);
    void finish(const Point& pt);

    double lenght() const;

    Point midPoint() const;

    void print() { cout << p1.X() << " " << p1.Y() << ", "
                    << p2.X() << " " << p2.Y() << endl; }
};

#endif // LINE_H_INCLUDED
