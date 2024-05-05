#include <iostream>
using namespace std;

int main(){
    int num;

   //using while loop
   while(true){
    //prompt user to enter an integer between 5 and 10
    cout << "Enter an integer value between 5 and 10:";
    cin >> num;

      if(num>5&& num <10){
       cout<<"your input value ("<<num<<") has been accepted." <<endl;
        break;

      }else{

      if(num>5&&num>10){
         cout<< "Sorry, you entered an invalid number. Please try again. "<<endl;
         cin>> num;

      }
     }
   
    return 0;
   }
}