#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};
Node* insert(Node* head, int existingnode, int value2);
void print(Node* head);

int main()
{     
    Node* head = nullptr;
    Node* current = nullptr;
    int n;
    std::cin >> n;

    for (int i = 0; i < n; i++)
    {
        int value;
        std::cin >> value;
        Node* newnode = new Node; 
        newnode->data = value;    
        if (head == nullptr)
        {
            head = newnode;
            current = newnode;
        }
        else
        {
            current->next = newnode;
            current = newnode;
        }
    }

    int existingnode, value2;
    std::cin >> existingnode;
    std::cin >> value2;
    head = insert(head, existingnode, value2);
    print(head);

    return 0;
}

Node* insert(Node* head, int existingnode, int value2)
{
    Node* ptr = head;
    while (ptr != nullptr)
    {
        if (ptr->data == existingnode)
        {
            Node* newnode = new Node; 
            newnode->data = value2; 
            newnode->next = ptr->next;
            ptr->next = newnode;
            break;
        }
        ptr = ptr->next;
    }
    return head;
}

void print(Node* head)
{
    Node* ptr = head;
    while (ptr != nullptr)
    {
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }
}
