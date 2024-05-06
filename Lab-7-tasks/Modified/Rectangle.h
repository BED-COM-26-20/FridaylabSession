#define RECTANGLE_H

class Rectangle {
    private:
    float length;
    float width;

    public:
    //Default constructor
    Rectangle(); 
    Rectangle(float l, float w);//overloaded constructor
    

    //Destructor
    ~Rectangle();

    //Accessor methods
    void setLength(float l);
    void setWidth(float w);
    float getLength() const;
    float getWidth() const;

    //Function to calculate area
    float calculateArea() const;
};