#include <iostream>

#include "PromptModule.h"
#include "ErrorHandlingModule.h"

using namespace std;

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

float Divide
  (const float theDividend, const float theDivisor)
{
    return (theDividend/theDivisor);
}

int main(int argc, char* argv[])
{
    SAMSErrorHandling::Initialize();

    int ReturnCode = 0;

    try
    {
        float Dividend = GetDividend();
        float Divisor = GetDivisor();

        cout << Divide(Dividend, Divisor) << endl;
    }
    catch (...)
    {
        ReturnCode =
            SAMSErrorHandling::HadleNotANumberError();
    };

    SAMSPrompt::PauseForUserAcknowledgement();
    return ReturnCode;
}