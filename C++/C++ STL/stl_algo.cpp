#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <map>
#include <set>
using namespace std;

int main(){
............SORTING............
        accending order
    vector<int> vec = {3,6,4,5,7,2,9,1};

    sort(vec.begin() , vec.end());

    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;

//..............UNIQUE elemets...........
    vector<int> v = {1, 2, 2, 3, 3, 3, 4, 5, 5, 6};

    cout << "Original vector: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Remove consecutive duplicates
    v.erase(unique(v.begin(), v.end()), v.end());

    cout << "After removing duplicates: ";
    for (int x : v) cout << x << " ";
    cout << endl;
 
//.............Reverse............
    vector <int> vec = {1,2,3,4,5,6,7};

    reverse(vec.begin() , vec.end());

    for(auto val : vec){
        cout << val << " ";
    }

// ............ linear search...........
    vector<int> vec = {1,2,3,4,5,6,7};
    int target = 11;

    cout << (find(vec.begin(), vec.end(), target) != vec.end() 
             ? "Element found" 
             : "Element not found") 
         << endl;


// ............ Binary search...........
    vector <int> vec = {1,2,3,4,5,6,7};
     cout << binary_search(vec.begin() , vec.end(), 4); //return bool true or false

}
