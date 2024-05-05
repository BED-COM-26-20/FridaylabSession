#include <iostream>
#include <string>
using namespace std;

int main(){
    //DECLARING AND INITIALIZING THE ARRAY
    string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    //LOOP FOR EACH ELEMENT OF THE ARRAY
    for(int i=0; i<sizeof(elements) / sizeof(elements[0]); ++i){

        //check if elements starts with letter B
        if(elements[i][0] == 'B'){

        //output the elements that starts with 'B'
            cout << elements[i] << endl;
        }
    }
    return 0;
}