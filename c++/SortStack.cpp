#include<iostream>
using namespace std;
#define MAX 100
int stack[MAX];
int top=-1;
bool isEmpty(){
return top==-1;
}

bool isFull(){
return top==MAX-1;
}

void push(int value){
if(isFull())
{
cout<<"Stack overflow"<<endl;
return;
}
stack[++top]=value;
}

int pop(){
if(isEmpty())
{
cout<<"Stack underflow"<<endl;
return -1;
}
return stack[top--];
}

int peek(){
if(isEmpty())
{
cout<<"Stack is empty"<<endl;
return -1;
}
return stack[top];
}

void insertSorted(int element){
if(isEmpty() || peek()<=element)
{
push(element);
return;
}
int temp=pop();
insertSorted(element);
push(temp);
}

void sortStack(){
if(isEmpty())
{
return;
}
int temp=pop();
sortStack();
insertSorted(temp);
}

void print(){
if(isEmpty())
{
cout<<"Stack is empty"<<endl;
return;
}
for(int i=top;i>=0;i--)
{
cout<<stack[i]<<" ";
}
cout<<endl;
}

int main(){
int n;
cin>>n;
int ele;
for(int i=0;i<n;i++){
    cin>>ele;
    push(ele);
}
cout<<"Sorted Stack: "<<endl;
sortStack();
print();
}
