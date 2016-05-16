#include <math.h>
#include "Line.h"

using namespace std;

Line::Line(): p1(Point(0.0, 0.0)), p2(Point(0.0, 0.0)) {};

Line::Line(const Point& pt1, const Point& pt2):
    p1(pt1), p2(pt2) {};

Line::Line(const Line& source):
    p1(source.p1), p2(source.p2) {};

Line::~Line() {};

Point Line::start() const
{
    return p1;
}

Point Line::finish() const
{
    return p2;
}

void Line::start(const Point& pt)
{
    p1 = pt;
}

void Line::finish(const Point& pt)
{
    p2 = pt;
}

double Line::lenght() const
{
    double ln1 = p2.X() - p1.X();
    double ln2 = p2.Y() - p1.Y();

    return sqrt(pow(ln1, 2) + pow(ln2, 2));
}

Point Line::midPoint() const
{
    return Point((p1.X() + p2.X()) / 2, (p1.Y() + p2.Y()) / 2);
}
