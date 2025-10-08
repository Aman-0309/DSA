#include <iostream>
#include <vector>
using namespace std;

int main(){


//............... VECTORS ..............

//syntax >>
  //vector <int> vector_name



   vector<int> arr;
       arr.push_back(5); //insert at last
       arr.push_back(2);
       arr.push_back(3);
       arr.push_back(9);
       arr.push_back(6);
       arr.push_back(7);
       arr.pop_back();  //delete last data 

        cout << arr.size() << endl;
        cout << arr.capacity() << endl;
 
  //for each loop :
        for(int val : arr){
            cout << val << " ";
        }

  // Indexing 
    cout <<"\nvalue at idx 4 : "<< arr[3] << " and " << arr.at(3) << endl;


  //fornt and back 
      cout << "element at front : " << arr.front() << endl;
      cout << "element at back : " << arr.back() << endl;



  // initalization
        vector<int> vec1 = {4,6,5,3,2};
        vector <int> vec2 (4,10); // 4 is size and 10 same element repeated in vec2

        cout << "elment in vector1 are : "; 
        for(int val : vec1){
            cout << val << " ";
        }
        cout << endl;

        cout << "elment in vector2 are : " ;
        for(int val : vec2){
            cout << val << " ";
        }
        cout << endl;


// More funtions :
 // erase >> to delete element
 // insert >> to insert element

    vector<int> vec1 = {4,6,5,3,2};

     vec1.erase(vec1.begin()+2); //erase the 3rd position
     vec1.insert(vec1.begin()+3,11);   // insert ar 4th position

        for(int val : vec1){
            cout << val << " ";
        }
        cout << endl;

  //clear >> to clear vector
  //empty >> to check vector is empty or not

    vec1.clear();
    cout <<"vector is empty: " << vec1.empty();



//............ Iterators................
    vector<int> nums = {10, 20, 30, 40, 50};

    // Forward iterator
    cout << "Forward iteration: ";
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Backward iterator
    cout << "Backward iteration: ";
    for (auto it = nums.rbegin(); it != nums.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

}