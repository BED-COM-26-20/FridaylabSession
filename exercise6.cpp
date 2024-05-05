#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

//function to count vowels
int countVowels(const string& str){
    int vowelCount = 0;
    for (char ch : str) {
        char caseCh = (ch);
        if(caseCh == 'a' ||caseCh == 'e' ||caseCh == 'i' ||caseCh == 'o' ||caseCh == 'u'){
            vowelCount++;
        }
    }
    return vowelCount;
}

//function to reverse a string
void reverse(string& str){
    reverse(str.begin(), str.end());
}

int main(){
    string filename = "module.txt";

    //open a textfile in read mode
    ifstream infile("module.txt");
   if (infile.is_open()){
    cerr << "Failed to open file: " <<filename << endl; 
   }

    //variable to hold the contents of the file
    string fileData;

    //close the file
    infile.close();

     // calculate number of files infileData
    int vowelCount = countVowels(fileData);

    //reverse the content of fileData
    reverse(fileData);

    //output of thecontents in a reversed way
    cout <<"Reversed content of the file: " << endl;

    //Output number of vowels in fileData
    cout << "Number of vowels: " << vowelCount <<endl;

    return 0;
}


   