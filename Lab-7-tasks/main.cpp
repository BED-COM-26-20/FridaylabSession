#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    float length, width;

    Rectangle rectangle;

    cout << "Enter length of the rectangle: ";
    cin >> length;
    rectangle.setLength(length);

    cout << "Enter width of the rectangle: ";
    cin >> width;
    rectangle.setWidth(width);

    cout << "Area of rectangle is: "<< rectangle.calculateArea() << endl;

    return 0;

}