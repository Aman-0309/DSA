#include <iostream>
#include <stack>
#include <queue>
#include <map>
using namespace std;

int main(){


    //...............Stack.............
             // (LIFO) last in first out 

      //stntax:
        // stack<int> s 

    stack <int> s;
    
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4); // it is top >> LIFO
    
    while(!s.empty()){
        cout << s.top() << " " ;
        s.pop();
    }
    return 0;



//................Queue...............
       // FIFO (first in first out)

    queue <int> q;
     
     q.push(1);
     q.push(2);
     q.push(3);
     q.push(4);

     while (!q.empty()){
        cout << q.front() << " ";
        q.pop();
     }
    cout << endl;
    return 0;
     




//..............MAP............
       // key value pair -->> in sorted manner accending order (a-z)
   //syntax
      //map<"key type" , "value_type"> nameOfMap
       //m[key] = value; --> for giving value
      
    map<string , int> m;
     
    m["tv"] = 100;
    m["laptop"] = 103;
    m["headphone"] = 87;
    m["watch"] = 88;
    m["touchpad"] = 50;

    for(auto val : m){
        cout << val.first << " " << val.second << endl;
    }

    cout << "count " << m.count("laptop");


    //multi_map >>> stores the duplicate key-val also
    //unorderd_map >>> stores the key-val in unsorted manner
}