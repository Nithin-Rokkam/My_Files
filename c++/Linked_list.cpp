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

void insertAtHead(Node* &head,int data){
	Node* temp=new Node(data);
	temp->next=head;
	head=temp;
}

void print(Node* &head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

int main() {
	Node* head = NULL;
    int n;
    cout << "Enter the number to insert at head(-1 to stop): ";
	while(true){
	cin>>n;
	
	if(n==-1){
		break;
	}
    insertAtHead(head, n);
}
    print(head);
    return 0;
}
