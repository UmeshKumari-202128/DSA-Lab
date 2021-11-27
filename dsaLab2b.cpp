// UmeshKumari-DSA-lab-2, Roll No. - 202128
//Using recursion concept write a program for finding the element in the array using binary search method
#include<iostream>
using namespace std;

int binarySearch(int arr[], int a, int b, int num) {
   if (a <= b) {
      int mid = (a + b)/2;
      if (arr[mid] == num)
         return mid ;
      if (arr[mid] > num)
         return binarySearch(arr, a, mid-1, num);
      if (arr[mid] < num)
         return binarySearch(arr, mid+1, b, num);
   }
   return -1;
}

int main(void) {
   int arr[] = {1, 3, 7, 15, 18, 20, 25, 33, 36, 40};
   int n = sizeof(arr)/ sizeof(arr[0]);
   int num;
   cout<<"Enter a value of key to  be searched: ";
  cin>>num;

   int index = binarySearch (arr, 0, n-1, num);
   if(index == -1)
      cout<< num <<" is not present in the array";
   else
      cout<< num <<" is present at index "<< index <<" in the array";
   return 0;
}
