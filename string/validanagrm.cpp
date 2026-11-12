#include<iostream>
#include<string>
using namespace std;

 bool isAnagram(string str1, string str2){
    if(str1.length()!= str2.length()){
        cout << "Not anagram" << endl;
        return false;
     }
     char count [26]={0};
     for(int i=0; i< str1.length();i++){
       // int idx =str1[i]-'a';
        count[str1[i]-'a']++;
     }
     for(int i=0; i< str2.length();i++){
       // int idx =str2[i]-'a';
        if(count[str2[i]-'a']==0){
            cout << "Not anagram" << endl;
            return false;
        }
        count[str2[i]-'a']--;
     }
     
     cout << "valid anagram" << endl;
     return true;

 }

int main (){
     string str1=" anagram";
     string str2=" nagaram";
        isAnagram(str1,str2);
    }