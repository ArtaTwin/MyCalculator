#include <iostream>
#include "ErrorHandlingModule.h"

namespace SAMSErrorHandling
{
    using namespace std;

    void Initialize(void)
    {
        cin.exceptions(cin.failbit);
    }

    int HadleNotANumberError(void)
    {
        cerr << "Input error, not a number?" << endl;

        cin.clear();


        char BadInput[5];
        cin >> BadInput;

        return 1;
    }
}