#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int x) : data(x),next(nullptr){}


};
class LinkedList{
    Node* head;
    public:
        LinkedList() : head(nullptr){}

        void insert(int x){
            Node* newnode = new Node(x);
            if(!head){
                head  = newnode; 
            }
            else{
                Node* temp = head;
                while(temp->next) temp = temp->next;
                temp->next = newnode;
            }
        }
        void display(){
            Node* temp = head;
            while(temp){
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
};

int main(){
    LinkedList ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.display();
    return 0;
}