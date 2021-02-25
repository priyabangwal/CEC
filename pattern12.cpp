#include<iostream>
using namespace std;
int main()
{
int i,j,n=5;

for(i=1;i<=n;i++)
{
for(j=i;j>=1;j--)
{
cout<<"*";
}
cout<<endl;
}
for(i=n-1;i>=1;i--)
{
for(j=i;j>=1;j--)
{
cout<<"*";
}
cout<<endl;
}
return 0;
}
