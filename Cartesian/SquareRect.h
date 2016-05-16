#ifndef SQUARERECT_H_INCLUDED
#define SQUARERECT_H_INCLUDED

class Square;

class Rect
{
private:
    double width, height;
public:
    Rect() {};
    Rect(double x, double y): width(x), height(y) {};
    double area() { return width * height; }
    void convert( const Square& sq);
};

class Square
{
    friend class Rect;
private:
    double side;
public:
    Square() {};
    Square(double s): side(s) {};
    double area() { return side * side; }
};

void Rect::convert(const Square& sq)
{
   width = sq.side;
   height = sq.side;

}

#endif // SQUARERECT_H_INCLUDED
