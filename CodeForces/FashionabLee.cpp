#include<iostream>
using namespace std;
 
int main()
{
 
    int t;
    long n;
 
    cin >> t;
 
    for(int i=0; i<t; i++)
    {
        cin >> n;
 
        if( n % 4 == 0)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
 
 
    return 0;
}