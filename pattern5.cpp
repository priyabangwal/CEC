#include <iostream>
using namespace std;

int main()
{
    int j, n=5;

  

    for(int i = 1, k = 0; i <= n; ++i, k = 0)
    {
        for(j = 1; j <= n-i; ++j)
        {
            cout <<"  ";
        }

        while(k != 2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout << endl;
    }    
    return 0;
}
