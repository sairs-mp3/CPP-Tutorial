#include <iostream>

using namespace std;

// Multiple parameters are separated by a comma. You can have as many parameters as you want.
int addNumbers(int x, int y){

    int answer = x + y;

    return answer;
}

int main(){

    cout << addNumbers(43, 86);

    return 0;
}