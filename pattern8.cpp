#include <iostream>
using namespace std;

int main()
{
    int n=5;


    for(int i = n; i >= 1; --i)
    {
        for(int j = 1; j <= n-i; ++j)
            cout << "  ";

        for(int j = i; j <= 2*i-1; ++j)
            cout << j <<" ";

        for(int j = 1; j <= i-1; ++j)
            cout << j <<" ";

        cout << endl;
    }

    return 0;
}
