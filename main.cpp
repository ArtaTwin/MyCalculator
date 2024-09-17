#include <iostream>

using namespace std;

int main(int argc, char* argv[]){
    const int Dividend = 6;
    const int Divisor = 2;

    int Result = (Dividend/Divisor);
    Result = Result + 3;

    cout << Result << endl;

    char StopCharacter;
    cout << endl << "Press a key and \"Enter\": ";

    cin >> StopCharacter;
    return 0;
}
