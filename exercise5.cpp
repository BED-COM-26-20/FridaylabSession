#include <iostream>
using namespace std;

//functions for
double calculateAreaOfTriangle(double base, double height);
double calculateAreaOfRectangle(double length, double width);
double calculateAreaOfSquare(double side);

int main(){
    char Selection;
    double base, height, length, width, side;

    //loop to keep the program running until the user choose to quit
    while(true){
        cout<< "Please select the area of the shape to calculate:\n";
        cout << "1. Triangle\n";
        cout << "2. Rectangle\n";
        cout << "3. Square\n";
        cout << "4. Quit Program\n";
        cout << "Enter selection: ";
        cin>> Selection;

        switch(Selection) {
            case '1':
            //calculation of area of triangle
            cout << "Enter the base and height:";
            cin >> base >> height ;
            cout << "The area of triangle is:" << calculateAreaOfTriangle(base, height) << endl;
            break;

            case '2':
            //calculation of area of Rectangle
            cout << "Enter the length and width:";
            cin >> length >> width ;
            cout << "The area of Rectangle is:" << calculateAreaOfTriangle(length, width) << endl;
            break;

            case '3':
            //calculation of area of square
            cout << "Enter the side of a square:";
            cin >> side ;
            cout << "The area of square is:" << calculateAreaOfSquare(side) << endl;
            break;

            case '4':
            //Quit the program
            cout << "Exiting the program. \n";
            cout << "The area of triangle is:" << calculateAreaOfTriangle(base, height) << endl;
            return 0;
            
            default:
            //invalid input
            cout << "Your input was: " << Selection << " which is an invalid input.\n";
            cout << " Please enter a valid input!!!\n";
            break;
                    }
    }
    return 0;
}

//Function definitions
double calculateAreaOfTriangle(double base, double height){
return 0.5* base* height;
}    

double calculateAreaOfRectangle(double length, double width){
return  length* width;
}    

double calculateAreaOfSquare(double side){
return side*side;
}