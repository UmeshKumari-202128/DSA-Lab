//Write a program to search an element in a 2-D array using linear search
#include <iostream>
using namespace std;

int main()
{
    int i,j,rows,columns,element,check=0;

    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>columns;
    int arr[rows][columns];
    cout<<"please enter the elements of array"<<endl;
    for (i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            cout<<"element "<<"("<<i<<','<<j<<"): ";
            cin>>arr[i][j];
        }
    }

    cout<<"Enter the element you need to search: ";
    cin>>element;

    for (i=0;i<rows;i++){
        for (j=0;j<columns;j++){
            if (element == arr[i][j]){
                cout<<element<<" found at position " << " ("<<i<<','<<j<<")"<<endl;
                check = 1;
            }
        }
    }
    if (check == 0){
        cout<<element<<" element not found"<<endl;
    }

    return 0;
}
