// Umesh Kumari , Roll No. - 202128 , DSA Lab - 11

#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;


void swap(int * num1,int*num2);
void printArray(int arr[], int size);
int partition (int arr[], int low, int high);
void bubbleSort(int arr[], int n);
void quickSort(int arr[], int low, int high);
void binarySearch(int arr[], int l, int r, int x);
void linearSearch(int arr[],int len,int value);

int main()
{
    int i,value;
    int array[1000];

    for(i=0;i<1000;i++){
        array[i] = rand()%1000;
    }


    auto start = high_resolution_clock::now();
    bubbleSort(array,1000);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout <<"Time taken for bubbleSort to complete is " <<duration.count()<<" microseconds\n" << endl;


    for(i=0;i<1000;i++){
        array[i] = rand()%1000;
    }
    start = high_resolution_clock::now();
    quickSort(array,0,999);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout <<"Time taken for quickSortSort to complete is " <<duration.count()<<" microseconds\n" << endl;


    value = rand()%100;
    start = high_resolution_clock::now();
    binarySearch(array,0,1000,value);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout <<"Time taken for Binary Search to complete is " <<duration.count()<<" microseconds\n" << endl;

    for(i=0;i<1000;i++){
        array[i] = rand()%1000;
    }
    start = high_resolution_clock::now();
    linearSearch(array,1000,value);
    stop = high_resolution_clock::now();
    duration = duration_cast<microseconds>(stop - start);
    cout <<"Time taken for Linear Search to complete is " <<duration.count()<<" microseconds\n" << endl;
    return 0;
}
void linearSearch(int arr[],int len,int value){
    int i;
    for(i=0;i<len;i++){
        if(arr[i]==value){
            cout<<"Value found at "<<i<<endl;
            return;
        }
    }
}
void binarySearch(int arr[], int l, int r, int value)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        if (arr[m] == value){
            cout<<"Value found at "<<m<<"\n";
            return;
        }
        if (arr[m] < value)
            l = m + 1;
        else
            r = m - 1;
    }

    cout<<value<<" not found"<<endl;
    return ;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high- 1; j++)
    {

        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void swap(int * num1,int*num2){
    int temp = *num1;
    *num1 = *num2;
    *num2= temp;
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++){
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1])
                swap(&arr[j], &arr[j+1]);
        }
    }
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {

        int pi = partition(arr, low, high);


        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
