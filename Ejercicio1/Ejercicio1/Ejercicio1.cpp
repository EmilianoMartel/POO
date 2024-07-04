#include <iostream>
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

int main()
{
    srand(static_cast<unsigned>(time(nullptr)));
    GeometricFigure* figures[3];

    for (int i = 0; i < 3; ++i) {
        int randomFigure = rand() % 3;
        switch (randomFigure) {
        case 0:
            figures[i] = new Circle(static_cast<float>(rand() % 100 + 1));
            break;
        case 1:
            figures[i] = new Triangle(static_cast<float>(rand() % 100 + 1), static_cast<float>(rand() % 100 + 1));
            break;
        case 2:
            figures[i] = new Rectangle(static_cast<float>(rand() % 100 + 1), static_cast<float>(rand() % 100 + 1));
            break;
        }
    }

    for (int i = 0; i < 3; ++i) {
        cout << "Figure name: " << figures[i]->getName() << endl;

        if (Circle* circle = dynamic_cast<Circle*>(figures[i])) {
            cout << "Radius: " << circle->getRadius() << endl;
        }
        else if (Triangle* triangle = dynamic_cast<Triangle*>(figures[i])) {
            cout << "Base: " << triangle->getBase() << ", Height: " << triangle->getHeight() << endl;
        }
        else if (Rectangle* rectangle = dynamic_cast<Rectangle*>(figures[i])) {
            cout << "Length: " << rectangle->getLength() << ", Width: " << rectangle->getWidth() << endl;
        }
    }

    for (int i = 0; i < 3; ++i) {
        delete figures[i];
    }

    return 0;
}