#include <iostream>
using namespace std;

int main()
{
    int noOfPeople, heightOfFence, heightOfPeople, result;

    cin >> noOfPeople >> heightOfFence;

    result = noOfPeople;

    for (int i = 0; i < noOfPeople; i++)
    {
        cin >> heightOfPeople;
        if (heightOfPeople > heightOfFence)
        {
            result++;
        }
    }

    cout << result;
}