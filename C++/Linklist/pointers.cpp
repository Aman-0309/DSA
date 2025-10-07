#include <iostream>
using namespace std;
    // pointers 

int main(){
    int a = 10;
    int* ptr = &a;
    int *parentptr = ptr;

    // pointer to pointer
    int **nextptr = &ptr;

    cout << a << endl; // a stores the val of a 
    cout << &a << endl; // &a is the add of a 
    cout << ptr <<endl; // ptr stores add of a 
    cout << &ptr << endl; // it is add of ptr
    cout << parentptr <<endl; //it stores the val of ptr which is add of a

    cout << nextptr <<endl; // it store the add of ptr 

cout << ".................."<< endl;

// de-refrence the pointers
    cout << a << endl; // a stores the val of a 
    cout << *(&a) << endl; //print the val of a 
    cout << *(ptr) <<endl; // print the val of a which is stored a ptr  
    cout << *(&ptr)<< endl; // print the add of a whch is stored in ptr
    cout << *(parentptr)<<endl; //print the val of a which is stored in ptr

    cout << *(nextptr) <<endl; // print the add of a stored in ptr
    cout << **(nextptr) <<endl; // print the val of a stored in ptr




//Question : predict the output?

int a = 5;
int *p = &a;
int **q = &p;

cout << *p << endl; //5
cout << **q << endl; //5
cout << p << endl; //add of a
cout << &p << endl; // add of p
cout << *q << endl; // add of a

int a = 5;
int *p = 0;
p = &a;
cout << *p; // 5



int x = 9;
int *p = &x;
int **q = &p;
int y = **q + 1;
*p = y + 2;
cout << x << " " << y;  // 12 10

int arr[] = {10, 20, 30};
int *p = arr;
cout << *(p + 2);  // >> arr[2]



// array pointer {constant pointer}
int arr[] = {5, 10, 15};
int *p = arr;
int *q = &arr[2];
cout << q - p; //q - p = (0x108 - 0x100) / 4 = 8 / 4 = 2


int a = 5;
int *p = &a;
int **q = &p;
int ***r = &q;
***r = 10;
cout << a; // it changes the val of a to 10


int a = 5;
int *p = &a;
(*p)++;
cout << a << endl; //6
cout << *p;  //6


//comparision of pointer
int arr[3] = {10, 20, 30};
int* ptr1 = &arr[0];
int* ptr2 = &arr[2];

cout << ptr1 << endl;     // address of arr[0]
cout << ptr2 << endl;     // address of arr[2]
cout << (ptr1 < ptr2);    

return 0;
}