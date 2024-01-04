#include <iostream>

using namespace std;

int main(){
    int intVar = 15000000000;
    intVar = (intVar * 10) / 10;
    cout << "Value of intVar is " << intVar << endl;

    intVar = 1500000000;
    intVar = (static_cast<double>(intVar) * 10) / 10;
    cout << "Value of intVar is " << intVar << endl;

    return 0;
}