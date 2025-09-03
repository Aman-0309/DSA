#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
     // lets find the maximum sum array sum by KANDAN's Algorithm 

     vector <int> arr = {5, 6, -4, 9, -6, 8};
     int currentSum = 0 , maxSum = __WINT_MIN__;
     for(int i=0; i<arr.size(); i++){
        currentSum += arr[i];
        maxSum = max(maxSum , currentSum);   // return maxm of currentSum and MaxSum 

        // edge case if all element may be in -ve
        if(currentSum < 0){
            currentSum = 0;
        }

     }
     cout << "The maximum subarray sum by Kadan's algo is : " << maxSum << endl;

}
