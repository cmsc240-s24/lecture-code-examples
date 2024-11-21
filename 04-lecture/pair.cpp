#include <vector>
#include <utility>
#include <iostream>
using namespace std;


int main()
{
    pair<char, int> myPair;
    myPair.first = 'A';
    myPair.second = 10;

    vector<pair<char, int>> v;

    v.push_back(myPair);

    return 0;
}