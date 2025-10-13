#include <iostream>
#include <string>
#include <cctype>  // for isalnum() and tolower()
using namespace std;

int main(){

    //............Palindrome check..........

    string str = "A man, a plan, a canal: Panama";
    bool isPalindrome = true; //flag

    string str1 = "";

    for(char ch : str){
        if(isalnum(ch)){
            str1 += tolower(ch);
        }
    }
    cout << "String : " << str1 <<endl;
    
    int start = 0 , end = str1.size()-1;
    while(start < end){
        if(str1[start] != str1[end]){
            return false;
            break;
        }
        start++;
        end--;
    }
    if(isPalindrome){
        cout << "Result : Valid palindrome";
    }else{
        cout << "Result : Not a Valid palindrome";
    }



    //...............Remove all occurance.......
    string str = "basdsasddasdasdk";
    cout << "Strig : " << str << endl;
    string part = "asd";

    while(str.length() > 0 && str.find(part) < str.length()){ //find >> intial positon
        str.erase(str.find(part) , part.length()); //erase
    }
    cout << "Result String : " << str <<endl;
}