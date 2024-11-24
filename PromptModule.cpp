#include <iostream>

#include "PromptModule.h"

namespace SAMSPrompt
{
    using namespace std;

    void PauseForUserAcknowledgement(void)
    {

        char StopCharacter;
        cout << endl << "Press a key and \"Enter\": ";
        cin >> StopCharacter;
    }

}