#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    cout << "Enter the number of rows (not more than 3): ";
    cin >> rows;
    while(rows>3){
        cout << "number of columns cannot exceed 3: ";
        cin >> rows;
    }

        cout << "Number of columns: ";
        cin >> cols;
        while(cols>3){
            cout << "number of columns cannot exceed 3: ";
            cin >> cols;
        }

        //dynamically allocate array
        double** dynamicArray = new double*[rows];
        for(int i =0; i<rows; ++i){
            dynamicArray[i] = new double[cols];

        }

        int cout = 1;
        for(int i =0; i<rows; ++i){
        for(int j =0; j<rows; ++j){
            dynamicArray[i] = new double[cols];
            cout << "Enter value for element [" << i << "][" << j <<  "]: ";
            cin >> dynamicArray[i][j];
            cout++;
        }
        }
        cout << "Values of each element of the array: " <<endl;
        for(int i =0; i<rows; ++i){
        for(int j =0; j<rows; ++j){
            cout << dynamicArray[i][j] << " ";
            cout << endl;
        }
        }
          for(int i =0; i<rows; ++i){
            delete[] dynamicArray[i];
          }
          delete[] dynamicArray;
          return 0;
}