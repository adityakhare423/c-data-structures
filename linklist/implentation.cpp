#include<iostream>
using namespace std;
class Node{
    int data;
    Node *next;
public:
    Node(int val){
        data=val;
        next=NULL;
    }
};
class list{
    Node *head;
    Node *tail;
  public:  
    list(){
            head=NULL;
            tail=NULL;
        }
};

int main(){
    list ll();
    return 0;

}