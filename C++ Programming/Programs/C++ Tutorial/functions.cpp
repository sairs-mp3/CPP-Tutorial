#include <iostream>

using namespace std;

// This is called function prototyping. Main needs to know that printSomething is a function, that is why we prototype the function. 
void printSomething();

// Main is always the first function called. 
int main(){

    printSomething();

    return 0;
} 

// When a function doesn't return anything use void. Void basically mean return nothing. () are for parameters. 
void printSomething(){

    cout << "This is text on the screen" << endl;

}



