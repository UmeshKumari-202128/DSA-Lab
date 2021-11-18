//Write a program for swapping two numbers using call by reference strategies
// Umesh kumari , Roll No. - 202128 , DSA Lab - 4

#include<iostream>
using namespace std;


void swap(int *a, int *b){

 int swap;
 swap=*a;
 *a=*b;
 *b=swap;}


int main()
{
 int a=76, b=53;
 cout<<"before swapping value of a and b is: "<<a<<" and "<<b<<endl;

 swap(&a, &b);
 cout<<"after swapping value of a and b is: "<<a<<" and "<<b<<endl;

 return 0;
}
