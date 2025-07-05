#include <iostream>
#include <string>
using namespace std;

class Stack {
private:
    int *arr;
    int top;
    int capacity;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int x) {
        if (top >= capacity - 1) {
            cout << "Stack Overflow" << endl;
        } else {
            arr[++top] = x;
            cout << "Pushed: " << x << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
        } else {
            cout << "Popped: " << arr[top--] << endl;
        }
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Top element: " << arr[top] << endl;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack contents: ";
            for (int i = top; i >= 0; --i) {
                cout << arr[i];
                if (i != 0) cout << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int N, capacity;
    cin >> N >> capacity;

    Stack s(capacity);

    string operation;
    for (int i = 0; i < N; ++i) {
        cin >> operation;
        if (operation == "push") {
            int x;
            cin >> x;
            s.push(x);
        } else if (operation == "pop") {
            s.pop();
        } else if (operation == "peek") {
            s.peek();
        } else if (operation == "display") {
            s.display();
        }
    }

    return 0;
}
