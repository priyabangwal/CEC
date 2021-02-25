#include <iostream>
using namespace std;
int main()
{
int n=5, x, y, k;

for(x = 1; x <= n; x++)
{
for(y = x; y <n; y++)
{
cout << " ";
}
for(k = 1; k < (x*2); k++)
{
cout << "*";
}
cout << "\n";
}
for(x = 4; x >= 1; x--)
{
for(y = n; y >  x; y--)
{
cout << " ";
}
for(k = 1; k < (x*2); k++)
{
cout << "*";
}
cout << "\n";
}
return 0;
}
