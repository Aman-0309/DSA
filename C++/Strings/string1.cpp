#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int main(){

  // Character array
        char str[] = {'r','a','m','\0'};

        cout << "size of sring is " << strlen(str) << endl;
        cout << "string is : " << str <<endl;
    
    
   // string --> this is dynamic in nature
         string str = "Aman using github";
         cout << "output : " << str << endl;


    //input char array
        char str1[100];
           cout <<"Enter the string : ";
           cin >> str1;   //only one word
           cout << "sring = " << str1 << endl;
        
           cout << "Enter the string : ";
           cin.getline(str1 ,100); //whole input
           cout << "sring = " << str1<< endl;
    
    //inpur string
        string str1;
           cout << "Enter the string : ";
           getline(cin ,str1); //whole input
           cout << "sring = " << str1<< endl;


    // concatenation
        string str1 = "vs";
        string str2 = "-code";

        string str3 = str1 + str2;
        cout << "output : " << str3 << endl;
        
    // Loop on string
        string sr = "GitHub is a version control";

        for(char ch : sr){
            cout << ch << " " ;
        }



    //.............Reverse of string............
          string sr = "GitHub is a version control";

            // by stl function
            reverse(sr.begin(), sr.end());
            cout << sr << " " << endl;

            //by loops
            cout << sr << " " << endl; // orignal string
            int st = 0 , end = sr.size() - 1;
            while (st < end){
                swap(sr[st] , sr[end]);
                st++;
                end--;
            }
                cout << sr << " "; // reversed string

}