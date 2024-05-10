#ifndef CIRCLE_H
#define CIRCLE_H

namespace shapes {
    class Circle {
    private:
        double radius;
    public:
        Circle(); // Default constructor
        Circle(double radius); // Overloaded constructor
        double getRadius() const;
        ~Circle(); // Destructor
    };
}

#endif // CIRCLE_H
