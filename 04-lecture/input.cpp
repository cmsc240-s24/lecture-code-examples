#include <iostream>
using namespace std;

 
int main()
{

    cout << "Please input some text and enter END to quit:" << endl;

    string lineOfText;
    while(getline(cin, lineOfText))
    {
        if (lineOfText == "END")
        {
            break;
        }
        cout << lineOfText << endl;
    }

    return 0;

}