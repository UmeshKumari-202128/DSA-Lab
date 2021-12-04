//Using recursion concept write a program for quick sort technique.
// Umesh Kumari , DSA Lab assignment 4 , Roll No. - 202128;

#include<iostream>
#include<cstdlib>
using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int Partition(int a[], int low, int high)
{
	int pivot, index, i;
	index = low;
	pivot = high;

	for(i=low; i < high; i++){

    if(a[i] < a[pivot]){

    swap(&a[i], &a[index]);
    index++;}}

	swap(&a[pivot], &a[index]);
	return index;
}

int PivotPartition(int a[], int low, int high)
{
	int pvt, n, temp;
	n = rand();
    pvt = low + n%(high-low+1);
	swap(&a[high], &a[pvt]);
	return Partition(a, low, high);
}

int QuickSort(int a[], int low, int high)
{
	int pindex;
	if(low < high){

    pindex = PivotPartition(a, low, high);
    QuickSort(a, low, pindex-1);
    QuickSort(a, pindex+1, high);}

	return 0;
}
int main()
{
	int n, i;
	cout<<"\nEnter the number of data element to be sorted: ";
	cin>>n;
	int arr[n];
	for(i = 0; i < n; i++){

    cout<<"Enter element "<<i+1<<": ";
    cin>>arr[i];}

	QuickSort(arr, 0, n-1);
	cout<<"\nSorted Data ";
	for (i = 0; i < n; i++)
    cout<<","<<arr[i];
	return 0;
}
