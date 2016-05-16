#ifndef RECT_H_INCLUDED
#define RECT_H_INCLUDED

class Polygon
{
protected:
    double width, height;
public:
    void set_values(double x, double y)
    {
        width = x;
        height = y;
    }
};

class Rectangle: public Polygon
{
public:
    double area() { return width * height; }
    friend Rectangle duplicate(const Rectangle& source);
};

class Triangle: public Polygon
{
public:
    double area() { return width * height * 0.5; }
};
#endif // RECT_H_INCLUDED
