#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <stdexcept>
#include <vector>
#include "doctest.h"


using namespace std;

// Function prototype
int maxElement(vector<int> nums); 

TEST_CASE("Testing the maxElement function") 
{
    CHECK(maxElement({1, 2, 3, 4, 5}) == 5);
    CHECK(maxElement({-10, -20, -30, -40, -5}) == -5);
    CHECK(maxElement({100, 200, 300, 400, 500}) == 500);
    CHECK(maxElement({42}) == 42);
    CHECK_THROWS_AS(maxElement({}), invalid_argument);
}

int maxElement(vector<int> nums)
{
    // If the vector is empty throw an exception.
    if (nums.size() == 0)
    {
        throw invalid_argument("Vector has zero length");
    }

    int max = nums.front();

    for (int num : nums)
    {
        if (num > max)
        {
            max = num;
        }
    }

    return max;
}