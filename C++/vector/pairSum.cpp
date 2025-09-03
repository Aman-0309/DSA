#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int> arr = {4, 5, 7, 11, 16};   // must be sorted
    vector<int> ans;
    int target = 18, n = arr.size();
    int i = 0, j = n - 1;

    while (i < j) {
        int pairSum = arr[i] + arr[j];

        if (pairSum > target) {
            j--;  // move right 
        }
        else if (pairSum < target) {
            i++;  // move left 
        }
        else { // pair found
            ans.push_back(arr[i]);
            ans.push_back(arr[j]);
            break;  // stop after finding one pair
        }
    }

    if (!ans.empty()) {
        cout << "Pair found: " << ans[0] << " , " << ans[1] << endl;
    } else {
        cout << "No pair found!" << endl;
    }

    return 0;
}
