#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    float Dividend = 1;
    cout << "Dividend: " << endl;
    cin >> Dividend;

    float Divisor = 1;
    cout << "Divisor: " << endl;
    cin >> Divisor;

    float Result = (Dividend/Divisor);
    cout << Result << endl;

    char StopCharacter;
    cout << endl << "Press a key and \"Enter\": ";
    cin >> StopCharacter;

    return 0;
}
