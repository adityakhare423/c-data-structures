#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int>  vec(4,0);
    cout<< "size =" << vec.size() << endl;
    for(int val:vec){
        cout<< val << endl;
    }
    return 0;
}



