#include<iostream>
#include<stack>
using namespace std;

void pushatbottom(stack<int>  &s, int val){
    if(s.empty()){
        s.push(val);
        return;

    }
    int temp=s.top();
    s.pop();
    pushatbottom(s,val);
    s.push(temp);

}

int main(){
    stack<int> 5;
    s.push(3);
    s.push(2);
    s.push(1);
    while(is.empty){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}