#include <iostream>
#include "Point.h"
#include "Line.h"
#include "Rect.h"
#include "SquareRect.h"
#include "Family.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Point p1(1.2, 2.3);
    Point p2(p1);
    Point p3;
    Line l1;
    l1.print();
    Line l2(p3, p1);
    l2.print();
    cout << l2.lenght() << endl;
    cout << p1.X() << " " << p1.Y() << endl;
    cout << p2.X() << " " << p2.Y() << endl;
    cout << p3.X() << " " << p3.Y() << endl;
    Rectangle rect;
    rect.set_values(3,5);
    Triangle trig;
    trig.set_values(4,6);
    Rectangle rect1 = duplicate(rect);
    cout << rect1.area() << " "  << endl;
    Square sq(5);
    Rect rect2;
    rect2.convert(sq);
    cout << sq.area() << endl;
    cout << rect2.area() << endl;
    Dauther kelly;
    Son mark(0);
    return 0;
}
