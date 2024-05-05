#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    
    //random number generator
    srand(time(nullptr));

    //generating a random integer between 0 and 11
    int daysUntilExpiration = rand()%12;

    //using switch statements
    switch(daysUntilExpiration){
        case 1:
        cout<< "Your subscription will expire soon. Renew now!" << endl;
        break;

        case 2:
        cout << "Your subscription expires in" <<daysUntilExpiration<< "Renew now and save 10%!" << endl;
        break;

        case 3:
        cout << "Your subscription will expire within a day. Renew now and save 20%" << endl;
        break;

        case 4:
        cout << "Your subscription has expired." << endl;
        break;

        default:
        cout << "You have an active subscription" << endl;
    }
}