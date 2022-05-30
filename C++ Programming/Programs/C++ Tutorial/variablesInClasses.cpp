#include <iostream>
#include <string>

using namespace std;

class SaisClass{
    // These functions allow us to access the private "name" variable. 
    public:
        // This function sets/changes the name 
        void setName(string x){
            name = x;
        }
        // This function gets the name
        string getName(){
            return name;
        }

    // Class variables are typically private. Only things inside the same class can access the private variables.
    private:
        string name;
};

int main(){

    // Whenever you want to use a function that is in a class you have to create an object
    SaisClass saisObject;
    // This sets the name to "Sai Shettar"
    saisObject.setName("Sai Shettar");
    // This prints the name using the getName() function
    cout << saisObject.getName();

    return 0;
}