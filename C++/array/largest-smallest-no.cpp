#include <iostream>
using namespace std;

int main (){

    //<<<<<<<<<<<<<<  Smallest element in the array  >>>>>>>>>>>>>>>>>>>.
    int n = 8 ;
    int arr [ ]= {5, 7, 4, 8, 6, 1, 3, 2};

    int smallestNum = __INT_MAX__;
    int position = -1;

      for(int i=0; i<n; i++){ 
        if (arr[i] < smallestNum){
            smallestNum = arr[i];
            position = i;  // update position 
        }
      }
      cout << "The smallest number in the array is : " << smallestNum << endl ;
      cout << "The position of smallest number is : " << position +1  << endl ;
      return 0;




    // <<<<<<<<<<<<<<<<<<<<<  Largest number in the array >>>>>>>>>>>>>>>>
    int n =9;
    int arr [] = {4, 6, 3, 5, 8, 0, 4, 2, 1};

    int largestNum = __WINT_MIN__;
    int positon = -1  ;     // will be updated later

    for(int i=0; i<n; i++){
      if(arr[i]  > largestNum){
        largestNum = arr[i];
        positon = i ;    // updated position 
      }
    }
     cout << "The largest number in the array is : " << largestNum << endl;
     cout << "The position of largest number is : "  << positon +1 << endl;   // index start from 1 not from 0 for user
}