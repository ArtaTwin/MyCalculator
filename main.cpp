#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{

    cin.exceptions(cin.failbit);

    int ReturnCode = 0;

    try
    {
        float Dividend = 1;
        cout << "Dividend: " << endl;
        cin >> Dividend;

        float Divisor = 1;
        cout << "Divisor: " << endl;
        cin >> Divisor;

        float Result = (Dividend/Divisor);

        cout << Result << endl;
    }
    catch (...)
    {
        cerr << 
            "Input error, not a number?" <<
            endl;

        cin.clear();


        char BadInput[5];
        cin >> BadInput;

        ReturnCode = 1;
    };


    char StopCharacter;
    cout << endl << "Press a key and \"Enter\": ";
    cin >> StopCharacter;

    return ReturnCode;
}