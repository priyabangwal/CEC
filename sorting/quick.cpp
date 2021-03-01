#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void quicksort(int arr[], int l, int h)
{
	if(l<h)
	{
		int pivot = partition(arr,l,h);
		
		 partition(arr,l,pivot-1);
		
		 partition(arr,pivot +1,h);
	}
}
int partition(int arr[], int l, int h){
	int pivot = arr[h];
	int h= l-1;
	int j=l;
	for(j=l; j<h; j++){
		if(arr[j]<pivot){
			i++;
			swap(&arr[i], &arr[j]);
		}
		
	}
	swap(&arr[i+1], &arr[h]);
	return i+1;
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

	quicksort(arr,0,n-1);
	display(arr,n);
	return 0;
}

void display(int arr[], int n)
{
	int i;
	for(i=0; i<n; i++)
	cout<<arr[i]<< " ";
}



