#include <iostream>
using namespace std;

int main()
{
    int n, input, count=0, result=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> input;
            if (input == 1)
            {
                count++;
            }
        }
        if(count >=2){
            result ++;
        }
        count = 0;
    }
    cout << result;
}