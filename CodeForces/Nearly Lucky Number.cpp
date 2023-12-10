#include <iostream>
using namespace std;

int main()
{

    long long num, rem, count = 0;

    cin >> num;

    while (num > 0)
    {
        rem = num % 10;

        if (rem == 4 || rem == 7)
        {
            count++;
        }
        num /= 10;
    }

    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
