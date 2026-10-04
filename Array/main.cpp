#include <iostream>
using namespace std;

void PrintArray(int arr[] , int size){
    // Printing
    for(int index = 0 ; index <= size-1 ; index++){
    cout << arr[index] << " " ;
    }
}
int main (){

    int arr[] = {10, 20, 30, 40};
    int size = 4;
    PrintArray(arr , size);


    // Declaration of  an Array
    // int arr[5];
    // int num[10];


    // // Definetion of an arry
    // int arr[6] = {10,20,30,40,50,60};
    // int num[5] = {1,2,3,4,5};

    // Access of an element

    // int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    // cout << arr[1] << endl;


    // Input of an array

    // int arr[4];
    // for(int index=0 ; index<=3;index++){
    //     cout << "Enter the value for arr["<< index <<"]:" ;
    //      cin >>arr[index] ;
    //     cout << endl;
    // }

    // for(int index=0 ; index<=3 ; index++){
    //     cout << arr[index] << " " ;
    // }

    // Traversing of an array 

    // int arr[4];
    // for(int i=0 ; i<=3 ; i++){
    //     cout << i << endl;
    // }


    // Array pass in the funcction


       return 0;
}