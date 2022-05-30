#include <iostream>

using namespace std;

int main(){
    
    // Declaring variables
    int a;
    int b;
    int sum;

    // Asking user for one number. Stores that number in the "a" variable
    cout << "Enter a number: \n";
    cin >> a;

    // Asking the user for another number. Stores that number in the "b" variable
    cout << "Enter another number: \n";
    cin >> b;

    // Calculates the sum of the two numbers stored in variables "a" and "b" and outputs the sum
    sum = a + b;
    cout << "The sum of those numbers is " << sum << endl;

    return 0;
}