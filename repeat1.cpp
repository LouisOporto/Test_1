#include <iostream>
using namespace std;
int main(){
    cout << "Enter the number of lines for the repeat:" << endl;
    int linesForRepeat; //declaration of type int
    cin >> linesForRepeat; //user input
    if(linesForRepeat <= 0){
        cout << "You have entered a negative number or zero!" << endl;    
    }

    for(int i=0; i < linesForRepeat; i++){
        cout << "This is the sentence." << endl;
    }
    return 0;
}