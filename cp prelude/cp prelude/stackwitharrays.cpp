#include <bits/stdc++.h>
using namespace std;

class Stack {
    int* arr;
    int top;
    int capacity;

public:
    // Constructor with size
    Stack(int size) {
        capacity = size;
        arr = new int[size];
        top = -1;
    }

    void push(int x) {
        if (top == capacity - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x; // Fixed increment
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is Empty\n";
            return -1;
        }
        return arr[top];
    }
};

int main() {
    Stack s(5); // Provide size for the stack
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.pop();
    cout << s.peek() << endl; // Should output 3
    return 0;
}
