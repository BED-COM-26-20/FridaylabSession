#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    //random number generator
    srand(time(nullptr));

    //generating a random integer between 0 and 11
    int daysUntilExpiration = rand()%12;
    
    if(daysUntilExpiration<=10 && daysUntilExpiration>5){
        cout << "Your subscription will expire soon. Renew now!" << endl;
        }

    else if (daysUntilExpiration<=5 && daysUntilExpiration > 1){
         cout << "Your subscription expires in" <<daysUntilExpiration<< "Renew now and save 10%!" << endl;
    }
    else if (daysUntilExpiration<=1){
         cout << "Your subscription will expire within a day. Renew now and save 20%" << endl;
    }
     else if (daysUntilExpiration<=0){
         cout << "Your subscription has expired." << endl;
     }

     else{
        cout << "You have an active subscription" << endl;
     }

    return 0;      
}