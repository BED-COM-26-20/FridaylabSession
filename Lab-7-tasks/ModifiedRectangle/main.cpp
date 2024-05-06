#include <iostream>
#include "Rectangle.h"
using namespace std;

int main(){
    float length, width;
    //creating an instance of a rectangle using default constructor
    Rectangle rectangle;

    cout << "Enter length of rectangle2: ";
    cin >> length;

    cout << "Enter width of rectangle2: ";
    cin >> width;

    Rectangle rectangle2(length, width);

    cout << "Area of rectangle2 is: "<< rectangle2.calculateArea() << endl;

    return 0;
}