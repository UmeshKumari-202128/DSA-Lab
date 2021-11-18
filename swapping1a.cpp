// C++ Program to Swap two numbers using call by value
//Umesh kumari, Roll No. - 202128 , DSA Lab - 4

#include<iostream>
using namespace std;

void swap(int a,int b)
{
        int temp;
        temp=a;
        a=b;
        b=temp;
        cout<<"after swapping value of a and b is: "<<a<<" and "<<b<<endl;


}

int main()
{
        int a,b;

        cout << "Enter a and b \n";
        cin >> a >> b ;

        cout<<"before swapping value of a and b is: "<<a<<" and "<<b<<endl;


        swap(a,b);


        return 0;
}



