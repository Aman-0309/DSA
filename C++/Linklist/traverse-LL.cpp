#include<iostream>
#include<vector>
using namespace std;

//.....Traversal in LinkedList......

 class Node{
    public:
     int data;
     Node*next;
    
    public:
     Node(int data1){
        data = data1;
        next = nullptr;
     }
 };

 int main(){
    vector <int> arr = {6,7,4,7,7,3};

    Node* head = new Node(arr[0]);

    Node* currentNode = head; // first node to build list
    
    for(int i=1;i<arr.size();i++){
        Node* newNode = new Node(arr[i]);
        currentNode->next = newNode;
        currentNode = newNode;  //move to next node
    }

   // Traversal of Linked List.
        Node* temp = head;
        while (temp != nullptr){
        cout << temp->data << " -> ";
        temp = temp->next ; 
        }
    
    return 0;
    
 }