#include <iostream>

using namespace std;
int main()
{
     int i,j,n=5;
   
    cout<<"\n";
    for(i=1; i<=n; i++){
   for(j=0; j<n-i; j++){

cout<<" ";
}
for(j=0; j<i; j++){
   cout<<"*";
}
 cout<<"\n";
}
    return 0;
}
