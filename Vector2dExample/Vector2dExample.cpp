#include <iostream>
#include"Vector2d.h"
#include<string>

Vector2d operator*(double scalar, Vector2d& vec) {
    return vec * scalar;
}

int main()
{
    Vector2d noParametr;
    noParametr.print();
    Vector2d coordinates(1, 1);
    coordinates.print();
    Vector2d twoCoordinates(5, 5, 10, 20);
    twoCoordinates.print();
    Vector2d copy(coordinates);
    copy.print();
    copy.sum(coordinates).print();
    copy = copy.sum(coordinates);
    copy.sub(coordinates).print();
    copy.mult(2).print();
    std::cout << copy.scalarMult(copy) << std::endl;
    std::cout << copy.length() << std::endl;

    Vector2d a(1, 2);
    Vector2d b(2, 3);
    Vector2d c = a + b;
    c.print();
    c = c + a;
    c.print();
    c = c - b;
    c.print();
    c = c * 10;
    c.print();
    std::cout << c*b << std::endl;
    c = 2 * c;
    c.print();
    c += b;
    c.print();
    c -= a;
    c.print();
    c *= 2;
    c.print();
    std::cout << string(c) << std::endl;
    return 0;
}
