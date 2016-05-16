#include "Point.h"

Point::Point()
{
    init(0.0, 0.0);
}

Point::Point(double xs, double ys)
{
    init(xs, ys);
}

Point::Point(const Point& source)
{
    init(source.x, source.y);
}

Point::~Point()
{

}

void Point::init(double xs, double ys)
{
    x = xs;
    y = ys;
}

double Point::X() const
{
    return x;
}

double Point::Y() const
{
    return y;
}

void Point::X(double xs)
{
    x = xs;
}

void Point::Y(double ys)
{
    y = ys;
}

