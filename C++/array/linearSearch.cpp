#include <iostream>
using namespace std;

int main (){

//<<<<<<<<<<<<<<<<<<<<< linear search >>>>>>>>>>>>>>>>>

    int arr[100] , size , target;
    cout << "Enter the size of an array : ";
    cin >> size;
    // input the array
    cout << "Enter the array : ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }

    cout << "Enter the target from the array : ";
    cin >> target;
  // linear search
   bool found = false;      // flag which will be updated later 
    for(int i=0; i<size; i++){
       if(arr[i] == target){
        cout <<"The target is at "<<  (i + 1) << endl;
        found = true;       // flag found 
       }

       }
        if(!found){
        cout << "Target not found!" << endl;
    }
}