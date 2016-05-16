#include "Rect.h"

Rectangle duplicate(const Rectangle& source)
{
    Rectangle rect;
    rect.width = source.width;
    rect.height = source.height;

    return rect;
}
