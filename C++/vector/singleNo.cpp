#include <iostream>
#include <vector>
using namespace std;

int main (){

// // for each loop => 
//   vector <int> nums = { 1, 3, 5, 7};

//    cout << "The size of the vector is : " << nums.size() << endl;
//      cout << "The elements are: " ;
//   for(int value : nums){
//     cout << val << " ";
//   }




// Single number problem (136);

vector <int> nums = {1, 5, 1, 2, 2};
int ans = 0;

for (int value : nums){
  ans = ans ^ value;
}
cout << "The single number is : " << ans << endl;


}