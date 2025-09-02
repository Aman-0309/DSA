#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
     // lets find the maximum sum array sum {brute force approch}

     vector<int> arr = {3,  -6, 8, 2, -1, 7};

     int maxSum = arr[0];
     for(int i=0; i< arr.size(); i++){
        int currentSum =0;
        for(int j=i; j<arr.size(); j++){
             currentSum += arr[j];
             maxSum = max(maxSum , currentSum);
     }
     }
     cout << "The maxSubarraySum is " << maxSum  << endl;
    return 0;
}

