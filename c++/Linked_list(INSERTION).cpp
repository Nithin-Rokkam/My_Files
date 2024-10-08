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

void insertAtStart(Node* &head,int data){
	Node* start=new Node(data);
	start->next=head;
	head=start;
}


void insertAtLast(Node* &tail,int data){
	Node* end=new Node(data);
	tail->next=end;
	tail=end;
}

void insertAtPos(Node* &tail,Node* &head,int pos,int data){
	if(pos==1){
		insertAtStart(head,data);
		return;
	}
	
	int count=1;
	Node* temp=head;
	while(count < pos-1){
		temp=temp->next;
		count++;
	}
	if(temp->next==NULL){
		insertAtLast(tail,data);
		return;
	}
	Node* insertNode=new Node(data);
	insertNode->next=temp->next;
	temp->next=insertNode;
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
//	int n;
//	while(true){
//		cin>>n;
//		if(n==-1){
//			break;
//		}
		insertAtStart(head,10);
		insertAtStart(head,23);
		insertAtStart(head,43);
		insertAtStart(head,12);
		insertAtPos(tail,head,2,14);
//	}
	print(head);
	return 0;
}
