#ifndef POINT_H_INCLUDED
#define POINT_H_INCLUDED

class Point
{
private:
    void init(double xs, double ys);
    double x, y;

public:
    Point();
    Point(double xs, double ys);
    Point(const Point& source);
    virtual ~Point();

    double X() const;
    double Y() const;

    void X(double xs);
    void Y(double ys);
};


#endif // POINT_H_INCLUDED
