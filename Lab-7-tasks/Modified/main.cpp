#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    float length, width;
    //creating an instance of a rectangle using default constructor
    Rectangle rectangle;

    cout << "Enter length of the rectangle1: ";
    cin >> length;
    rectangle.setLength(length);

    cout << "Enter width of the rectangle1: ";
    cin >> width;
    rectangle.setWidth(width);

    cout << "Area of rectangle1 is: "<< rectangle.calculateArea() << endl;

    cout << "\nEnter length of rectangle2: ";
    cin >> length;

    cout << "\nEnter width of rectangle2: ";
    cin >> width;

    Rectangle rectangle2(length, width);

    cout << "Area of rectangle2 is: "<< rectangle2.calculateArea() << endl;

    return 0;

}