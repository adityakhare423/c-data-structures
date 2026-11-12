#include<iostream>
using namespace std;
void oddEven(int n){
     if(!(n&1))
        cout<<"even"<<endl;
     else
        cout<<"odd"<<endl;
}
int main(){
    oddEven(87);
    return 0;
}