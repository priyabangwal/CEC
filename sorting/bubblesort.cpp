#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void display(int arr[], int n)
{
	int i;
	for(i=1; i<=n; i++)
	cout<<arr[i]<< " ";
}

int main()
{
	int i, j, n;
	cin>>n;
	int arr[n];
	for(i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<n; i++)
	{
		for(j=0; j<n-i; j++)
		{
			 if (arr[j] > arr[j+1])  
             swap(&arr[j], &arr[j+1]);
			
		}
	}
	display(arr,n);
	return 0;
}



