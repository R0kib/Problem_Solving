#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char col;
        int row;
        cin >> col >> row;
        vector<pair<char, int>> moves;
        for (char c = 'a'; c <= 'h'; ++c)
        {
            if (c != col)
            {
                moves.push_back({c, row});
            }
        }

        for (int r = 1; r <= 8; ++r)
        {
            if (r != row)
            {
                moves.push_back({col, r});
            }
        }

        for (const auto &move : moves)
        {
            cout << move.first << move.second << endl;
        }
    }

    return 0;
}
