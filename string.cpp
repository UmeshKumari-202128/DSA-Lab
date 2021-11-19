//write a program to implement the various operations on string such as a)length of string b)concatenation c)reverse a string d)copy a string
//Name : Umesh kumari , Roll No. : 202128 , DSA Lab - 5
#include <iostream>
#include <cstring>
using namespace std;
int main() {

	char name1[20] = "Umesh kumari";
	char name2[20] = "Priyanka";
	char name3[20];

	int  len;
	len = strlen(name1);
	cout << "strlen(name1) : " << len << endl;

	strcat(name1, name2);
	cout << "strcat( name1, name2): " << name1 << endl;

	strrev(name1);
	cout << "strrev(name1) : " << name1 << endl;

	strcpy(name3, name1);
	cout << "strcpy( name3, name1) : " << name3 << endl;

    return 0;
}
