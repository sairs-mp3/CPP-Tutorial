#include <iostream>

using namespace std;

// You need a semi colon at the end of a class. People make classes to store similar functions.
class SaisClass{
    // Public allows main to use functions inside of the class. Private doesn't allow main to use the functions inside of the class.
    public:
        void print(){
            cout << "Hello, World!";
        }

};

// An object is how you access the stuff inside your class
int main(){

    // In order to use the print function that I made, you have to create an object.
    // Now whenever we use saisObject, the program knows that we are going to be working with SaisClass.
    SaisClass saisObject;
    saisObject.print();

    return 0;
}