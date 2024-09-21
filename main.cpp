#include <iostream>

using namespace std;

void Initialize(void)
{
    cin.exceptions(cin.failbit);
}

float GetDividend(void)
{
    float Dividend = 1;

    cout << "Dividend: " << endl;
    cin >> Dividend;

    return Dividend;
}

float GetDivisor(void)
{
    float Divisor = 1;

    cout << "Divisor: " << endl;
    cin >> Divisor;

    return Divisor;
}

float Divide(const float theDividend, const float theDivisor)
{
    return (theDividend/theDivisor);
}

int HadleNotANumberError(void)
{
    cerr << 
        "Input error, not a number?" <<
        endl;

    cin.clear();


    char BadInput[5];
    cin >> BadInput;

    return 1;
}

void PauseForUserAcknowledgement(void)
{

    char StopCharacter;
    cout << endl << "Press a key and \"Enter\": ";
    cin >> StopCharacter;
}

int main(int argc, char* argv[])
{
    Initialize();

    int ReturnCode = 0;

    try
    {
        float Dividend = GetDividend();
        float Divisor = GetDivisor();

        cout << Divide(Dividend, Divisor) << endl;
    }
    catch (...)
    {
        ReturnCode = HadleNotANumberError();
    };

    PauseForUserAcknowledgement();
    return ReturnCode;
}