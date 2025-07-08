#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

struct Node {
    int key, value;
    Node* prev;
    Node* next;
    Node(int k, int v) : key(k), value(v), prev(nullptr), next(nullptr) {}
};

class LRUCache {
    int capacity;
    unordered_map<int, Node*> cache;
    Node *head, *tail;

    void remove(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void insertFront(Node* node) {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }

public:
    LRUCache(int cap) : capacity(cap) {
        head = new Node(-1, -1);  // dummy head
        tail = new Node(-1, -1);  // dummy tail
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (cache.find(key) == cache.end())
            return -1;

        Node* node = cache[key];
        remove(node);
        insertFront(node);
        return node->value;
    }

    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            Node* node = cache[key];
            node->value = value;
            remove(node);
            insertFront(node);
        } else {
            if ((int)cache.size() == capacity) {
                Node* lru = tail->prev;
                remove(lru);
                cache.erase(lru->key);
                delete lru;
            }
            Node* newNode = new Node(key, value);
            insertFront(newNode);
            cache[key] = newNode;
        }
    }

    void printCache() {
        cout << "CACHE:";
        Node* current = head->next;
        while (current != tail) {
            cout << " " << current->key;
            current = current->next;
        }
        cout << endl;
    }

    ~LRUCache() {
        Node* current = head;
        while (current) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};

int main() {
    int capacity;
    cin >> capacity;
    LRUCache cache(capacity);

    string command;
    while (cin >> command) {
        if (command == "PUT") {
            int key, value;
            cin >> key >> value;
            cache.put(key, value);
        } else if (command == "GET") {
            int key;
            cin >> key;
            cout << cache.get(key) << endl;
        } else if (command == "PRINT") {
            cache.printCache();
        } else if (command == "EXIT" || command == "END") {
            break;
        }
    }

    return 0;
}