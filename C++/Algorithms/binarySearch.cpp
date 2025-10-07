#include <iostream>
using namespace std;

// Binary search algo >>>> T.c == O(logn)
    //for sorted arr only
    //divide the search space into two half and search left and right

int main(){
int n = 12;
int arr[]= {1,3,4,5,6,7,8,9,11,13,16,24};
int target = 4;

int start = 0 , end = (n-1);
while (start <= end){

    int mid = start+(end-start)/2;  // to avoid overflow of integer

    if(arr[mid] == target){
        cout << "target is found at: " << mid+1 << endl;
        return 0;
    }
    else if(mid > target){ // left side
        end = mid - 1;
    }
    else { // right side
        start = mid + 1;
    }
  }
  cout << "Target is not found !" << endl;
  return 0;
   

}