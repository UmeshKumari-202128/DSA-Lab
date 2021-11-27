// UmeshKumari-DSA-Tutorial-2, Roll No. - 202128
// using iteration write a program for find the element in the array using binary search method.
#include <iostream>
using namespace std;

void binary_search(int key,int arr[],int length){
    int start=0,end=length-1,middle=length/2;

    while(start <= end){

        if(key < arr[middle]){
            end = middle-1;
            middle = (start + end)/2;
        }else if(key > arr[middle]){
            start = middle+1;
            middle = (start + end)/2;
        }
        if (key == arr[middle]){
            cout<<"Found at index "<<middle<<endl;
            return;
        }
        if(start >= end ){
            cout<<key<<" not found"<<endl;
            return;
        }
    }
}

int main()
{
    int length,i,key;
    cout<< "Enter Length of the array: ";
    cin>>length;
    int arr[length];
    cout<< "Enter the elements of your array"<<endl;
    for(i=0;i<length;i++){
        cout<<"Element"<<'('<<i<<") :";
        cin>>arr[i];
    }

    cout<<"Enter a value of key to  be searched: ";
    cin>>key;

    binary_search(key,arr,length);


    return 0;
}
