#include <iostream>
#include <string>
using namespace std;
int main(){
    cout << "Please enter your name:" << endl;
    string enteredName; //declaration
    cin >> enteredName; //user input
    cout << "Welcome to CPSC-120," << enteredName << "! Thanks for coming to my lab." << endl;
    return 0;
}
