#include <iostream>
using namespace std;

int main()
{
    int n=5;


    for(int i = n; i >= 1; --i)
    {
        for(int j = 0; j < n-i; ++j)
            cout << "  ";

        for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";

        for(int j = 0; j < i-1; ++j)
            cout << "* ";

        cout << endl;
    }

    return 0;
}
