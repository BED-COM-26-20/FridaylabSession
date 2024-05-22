#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square {
    private:
        double sideLength;
    public:
        Square(); // Default constructor
        Square(double length); // Overloaded constructor
        double getSideLength() const;
        ~Square(); // Destructor
    };
}
#endif