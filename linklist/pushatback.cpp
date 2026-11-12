
#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class list {
    Node *head;
    Node *tail;

public:
    list() {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) {
        Node *newNode = new Node(val);

        if (head == NULL) {
            head = tail = newNode;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
    }
    void push_back(int val){
        Node * newNode= new Node(val);
        if(head==NULL){
            head=tail=newNode;
        }
        else{
            tail->next=newNode;
            tail=newNode;
        }
}};

int main() {
    list ll;  // Correct object creation

    ll.push_front(10);
    ll.push_front(20);
    ll.push_front(30);

    return 0;
}
