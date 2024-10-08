#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
	Node(int data){
		this->data=data;
		this->next=NULL;
		
	}
};

void insertTail(Node* &head,Node* &tail,int data){
	Node* node1=new Node(data);
	if (tail == NULL) {
        head = node1;
        tail = node1;
    } 
	tail->next=node1;
	tail=node1;
}

void print(Node* &head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main(){
	Node* head=NULL;
	Node* tail=NULL;
	int n;
	while(true){
		cin>>n;
		if(n==-1){
			break;
		}
		insertTail(head,tail,n);
	}
	print(head);
	return 0;
}
