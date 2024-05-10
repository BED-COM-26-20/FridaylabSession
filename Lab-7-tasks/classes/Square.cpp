#include "Square.h"

namespace shapes {
    Square::Square() : sideLength(0.0) {}

    Square::Square(double length) : sideLength(length) {}

    double Square::getSideLength() const {
        return sideLength;
    }

    Square::~Square() {
        // Destructor
    }
}
