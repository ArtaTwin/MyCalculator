#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int ReturnCode = 0;

    float Dividend = 1;
    cout << "Dividend: " << endl;
    cin >> Dividend;

    if (!cin.fail())
    {
        float Divisor = 1;
        cout << "Divisor: " << endl;
        cin >> Divisor;

        if (!cin.fail())
        {
            float Result = (Dividend/Divisor);
            cout << Result << endl;
        }
        else
        {
            cerr << "Input error, not a number?" << endl;
            
            cin.clear();

            char BadInput[5];
            cin >> BadInput;

            ReturnCode = 1;
        };
    }
    else
    {
        cerr << "Input error, not a number?" << endl;

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
