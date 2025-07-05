#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 100;

class Queue {
private:
    int arr[MAX_SIZE];
    int front, rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int x) {
        if (rear == MAX_SIZE - 1) {
            // Overflow (not required by problem, but good to note)
            return;
        }
        if (front == -1) front = 0;
        rear++;
        arr[rear] = x;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << arr[front] << endl;
        front++;
        if (front > rear) {
            front = rear = -1; // Reset if queue becomes empty
        }
    }
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        for (int i = front; i <= rear; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    bool isEmpty() {
        return front == -1 || front > rear;
    }
};
int main() {
    int n;
    cin >> n;
    cin.ignore(); // Ignore newline after n
    Queue q;

    for (int i = 0; i < n; ++i) {
        string command;
        getline(cin, command);

        if (command.find("ENQUEUE") == 0) {
            int x = stoi(command.substr(8));
            q.enqueue(x);
        } else if (command == "DEQUEUE") {
            q.dequeue();
        } else if (command == "DISPLAY") {
            q.display();
        }
    }

    return 0;
}
