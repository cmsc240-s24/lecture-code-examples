#include <iostream>
#include <fstream>
using namespace std;



int main()
{

    string filename = "test.txt";

    ifstream diaryEntryFileStream;
    diaryEntryFileStream.open(filename, ofstream::app);

    if (!diaryEntryFileStream)
    {
        cout << "Could not find diary entry for " << filename << endl;
        return 1;
    }

    return 0;

}