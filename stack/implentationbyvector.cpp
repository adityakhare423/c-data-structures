#include<iostream>
#include<vector>
using namespace std;
// create a stack class using vector
class Stack{
    vector<int> vec;
public:
    void push(int val) {
        vec.push_back(val);
    }
    void pop(){
        if(!vec.empty()){
            vec.pop_back();
        }
    }
    int top(){
        if(!vec.empty()){
            return vec.back();
        }
        
        return -1; // Return -1 if stack is empty
    }
    bool isEmpty(){
        return vec.size() == 0;
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    while(!s.isEmpty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}