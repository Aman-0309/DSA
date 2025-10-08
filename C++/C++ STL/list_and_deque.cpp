#include <iostream>
#include <list>
using namespace std;

int main() {
//..............LIST..............

    list<int> nums = {20, 30, 40};

    // Add elements
    nums.push_front(10);
    nums.push_back(50);

    cout << "After push operations: ";
    for (int n : nums)
        cout << n << " ";
    cout << endl;

    // Remove elements
    nums.pop_front();
    nums.pop_back();

    cout << "After pop operations: ";
    for (int n : nums)
        cout << n << " ";
    cout << endl;

    // Forward iteration
    cout << "Forward: ";
    for (auto it = nums.begin(); it != nums.end(); ++it)
        cout << *it << " ";
    cout << endl;

    // Backward iteration
    cout << "Backward: ";
    for (auto it = nums.rbegin(); it != nums.rend(); ++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}



//.............DEQUE..............

#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(1);

    cout << "Deque elements: ";
    for (int n : dq)
        cout << n << " ";
    cout << endl;

    dq.pop_front();
    dq.pop_back();

    cout << "After pop operations: ";
    for (int n : dq)
        cout << n << " ";
    cout << endl;

    cout << "Front element: " << dq.front() << endl;
    cout << "Back element: " << dq.back() << endl;
    cout << "Element at index 1: " << dq[1] << endl;

    return 0;
}
