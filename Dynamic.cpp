#include <iostream>
#include <string>

using namespace std;
int main(){
    //dynamically allocating an integer
    int* dynamicInt = new int;

    //dynamically allocating a string
    string* dynamicString = new string;

    //prompt user for input
    cout << "Enter an integer: ";
    cin >> *dynamicInt;

    cout << "Enter a string: ";
    cin >> *dynamicString;

    cout << "Dynamically allocated integer: " << *dynamicInt << endl;
    cout << "Dynamically allocated string: " << *dynamicString << endl;

    //free dynamically allocated memory
    delete  dynamicInt;
    delete dynamicString;

    return 0;

}