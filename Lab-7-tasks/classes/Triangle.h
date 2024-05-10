#define TRIANGLE_H

namespace shapes {
    class Triangle {
    private:
        double base;
        double height;
    public:
        Triangle(); // Default constructor
        Triangle(double base, double height); // Overloaded constructor
        double getBase() const;
        double getHeight() const;
        ~Triangle(); // Destructor
    };
}


