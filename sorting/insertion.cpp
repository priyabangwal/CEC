#include <iostream>

using namespace std;

void display(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	cout<<arr[i]<< " ";
}

int main()
{
	int i, j, n,temp;
	cin>>n;
	int arr[n];
	for(i=1; i<=n; i++)
	{
		cin>>arr[i];
	}
	
	for(i=1;i<n; i++)
	{
	temp= arr[i];
	j = i-1;
	while(arr[j]>temp && j>=0)
	{
		arr[j+1] = arr[j];
		j--;
	}
	arr[j+1] = temp;
	}
	display(arr,n);
	return 0;
}



