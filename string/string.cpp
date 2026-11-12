#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = " nameste  aditya";
   
   //accesing the character with the loop
//    for ( int i=0; i<str.length();i++){
//        cout << str[i] << "";
//     }

    // using for each loop
    for(char ch: str){
        cout << ch << "";
    }
    return 0;
}