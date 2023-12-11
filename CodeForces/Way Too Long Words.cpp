#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, len;
    string word;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        if (word.length() > 10)
        {
            len = word.length();
            cout << word.substr(0, 1) + to_string((len - 2)) + word.substr(len - 1, 1) <<endl;
        }
        else
        {
            cout << word << endl;
        }
    }
}