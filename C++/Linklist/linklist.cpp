#include<iostream>
#include<vector>
using namespace std;

// .....Linked list using struct...
struct Node{
   int data;
   Node* next;

 //Constructor
  Node(int data1){
   data = data1;
   next = nullptr;
  }
};

int main (){
  // creating new Nodes by calling constructor
   Node* n1 = new Node(10);
   Node* n2 = new Node(20);
   Node* n3 = new Node(30);

  // Linking Nodes
   n1->next = n2;
   n2->next = n3;
   n3->next = nullptr;

   // Printing data
   Node* temp = n1;
   while(temp != nullptr){
      cout << temp->data <<" -> ";
      temp = temp->next;
   }
}







// ...... Linked List using class.....
 class Node{ // creating class
   public:
     int data;
     Node* next;

   public: // constructor
    Node(int data1){
      data = data1;
      next = nullptr;
    }
 };

int main(){
  //Creating Nodes
   Node* n1 = new Node(10);
   Node* n2 = new Node(20);

  // Linking Nodes
   n1 -> next = n2;
   n2 -> next = nullptr;

   cout << n1->data << "," << n2->data;
   

}