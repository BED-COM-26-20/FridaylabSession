#include <iostream>
using namespace std;

int main(){
    int rows, cols;

    cout << "Enter the number of rows (not more than 3): ";
    cin >> rows;
    if(rows>3){
        cout << "number of columns cannot exceed 3 \n";
        cin>> rows;
    }
    cout << "Enter Number of columns: ";
    cin >> cols;
        if(cols>3){
            cout << "number of columns cannot exceed 3 \n ";
            cin >> cols;
        }

    //dynamically allocating the array
    double** dynamicArray = new double*[rows];
    for(int i =0; i<rows; ++i){
            dynamicArray[i] = new double[cols];

    }
        cout << "Enter the values for each element of the array:\n";
        for(int i =0; i<rows; ++i){
           for(int j =0; j<cols; ++j){
             dynamicArray[i] = new double[cols];
             cout << "Enter value element "<< i << ", " << j << "): ";
             cin >> dynamicArray[i][j];
            }

        }
         cout << "\n The array you entered is:\n ";
        for(int i =0; i<rows; ++i){
           for(int j =0; j<cols; ++j){
             cout<< dynamicArray[i][j] << ", ";
            }
            cout << endl;
        }
        for(int i =0; i<rows; ++i){
          delete[] dynamicArray[i];
        }
        delete[] dynamicArray;

        return 0;
}