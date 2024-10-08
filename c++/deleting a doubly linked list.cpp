#include <iostream>
using namespace std;

struct Node {
  int data;
//  Node* prev;
  Node* next;
};

Node* head = nullptr;
Node* tail = nullptr;

void insertNode(int data) {
  // Create a new node.
  Node* newNode = new Node();
  newNode->data = data;

  // If the list is empty, make the new node the head and tail node.
  if (head == nullptr) {
    head = newNode;
    tail = newNode;
  } else {
    // The list is not empty. Make the new node the next node of the tail node.
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
}

void deleteNode(int data) {
  // Find the node to be deleted.
  Node* currentNode = head;
  while (currentNode != nullptr) {
    if (currentNode->data == data) {
      break;
    }
    currentNode = currentNode->next;
  }

  // If the node to be deleted is not found, return.
  if (currentNode == nullptr) {
    return;
  }

  // If the node to be deleted is the head node, update the head pointer.
  if (currentNode == head) {
    head = currentNode->next;
  }

  // If the node to be deleted is the tail node, update the tail pointer.
  if (currentNode == tail) {
    tail = currentNode->prev;
  }

  // Disconnect the node from the list.
  currentNode->prev->next = currentNode->next;
  currentNode->next->prev = currentNode->prev;

  // Delete the node.
  delete currentNode;
}

void printList() {
  Node* currentNode = head;
  while (currentNode != nullptr) {
    cout << currentNode->data << " ";
    currentNode = currentNode->next;
  }
  cout << endl;
}

int main() {
  insertNode(1);
  insertNode(2);
  insertNode(3);
  insertNode(4);

  printList();

  deleteNode(2);

  printList();

  return 0;
}

