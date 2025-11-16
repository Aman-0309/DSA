#include<iostream>
#include<vector>
using namespace std;

// ...... Search in a Linked-List.......

  class Node{
    public:
        int data;
        Node* next;

    public:
        Node(int data1){
            data = data1;
            Node* next = nullptr;
        }

    };

  // creating linked list
    Node* buildNode(const vector<int> &arr){

        Node* head = new Node(arr[0]);
        Node* currentNode = head;

        for(int i=1;i<arr.size();i++){
            Node* newNode = new Node(arr[i]);
            currentNode->next = newNode;
            currentNode = newNode;
        }
        return head;
    }

  // search function
    bool search(Node* head, int val){
        Node* temp = head;
        while (temp != nullptr){
            if(temp->data == val) return true;
            temp = temp->next;
        }
        return false;
    }

    int main(){
        vector<int> arr = {5,4,4,8,9,7,1,0};

        Node* head = buildNode(arr);

        int val = 55;
        if(search(head, val))
            cout << "Value found!";

        else{
            cout << "Value Not found!";
        }
        return 0;
    }



 //..... length of a LinkedList......

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
    vector <int> arr = {6,5,9,5,3,6,7,3};

    Node* head = new Node(arr[0]);

    Node* currentNode = head; 
    for(int i=1;i<arr.size();i++){
        Node* newNode = new Node(arr[i]);
        currentNode->next = newNode;
        currentNode = newNode;  
    }

   // Traversal of Linked List.
        Node* temp = head;
        int count = 0;
        while (temp != nullptr){
        //cout << temp->data << " -> ";
        temp = temp->next ;
        count++;
        }
        cout << "Length of Linked-List is : " << count << endl;
    
    return 0;
    
 }

