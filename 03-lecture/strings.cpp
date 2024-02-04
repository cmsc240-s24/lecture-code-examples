#include <iostream>
#include <string>

using namespace std;


int main()
{
    string mascot = "rab";
    string mascot2 = "rem";

    string hello = "";
    hello.append(1, mascot[0]);
    //cout << hello << endl;
    hello.append(1, 'e');
    
    for (int up = 1, down = 6;  up < down;  up++, down--)
    {
        cout << "up = " << up << "down = " << down << endl;
    }


    // If less -1 
    // If greater 1
    // If equal 0


    if (mascot.compare(mascot2) >= 1)
    {
        cout << "Greater!" << endl;
    }
    else if (mascot.compare(mascot2) <= -1)
    {
        cout << "Less!" << endl;
    }
    else 
    {
        cout << "Equal!" << endl;
    }
    


    return 0;
}