#include <iostream>

struct Node {
    int data;
    Node* next;
    
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() : head(nullptr) {}

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* current = head;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
        }
    }

    bool search(int val) {
        Node* current = head;
        while (current) {
            if (current->data == val) {
                return true;
            }
            current = current->next;
        }
        return false;
    }
};

int main() {
    LinkedList list;
    list.insert(5);
    list.insert(10);
    list.insert(15);
    list.insert(20);

    int searchValue ;
    std::cout<<"Enter the value =";
    std::cin>>searchValue;
    if (list.search(searchValue)) {
        std::cout << searchValue << " was found in the linked list." << std::endl;
    } else {
        std::cout << searchValue << " was not found in the linked list." << std::endl;
    }

    return 0;
}
