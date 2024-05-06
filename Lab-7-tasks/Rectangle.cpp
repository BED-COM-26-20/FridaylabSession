#include "Rectangle.h"

Rectangle::Rectangle() {
    length = 0.0;
    width = 0.0;

}

Rectangle::~Rectangle() {

}

void Rectangle::setLength(float l){
    length = l;
}

void Rectangle::setWidth(float w){
    width = w;
}

float Rectangle::calculateArea() const {
    return length * width;
}