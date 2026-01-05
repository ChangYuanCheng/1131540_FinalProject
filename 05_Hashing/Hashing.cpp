#include <iostream>
using namespace std;

#define SIZE 10

class HashTable {
private:
    int table[SIZE];

public:
    HashTable() {
        for (int i = 0; i < SIZE; i++) table[i] = -1;
    }

    int hash(int key) {
        return key % SIZE;
    }

    void insert(int key) {
        int idx = hash(key);
        int startIdx = idx;
        while (table[idx] != -1) {
            idx = (idx + 1) % SIZE;  // Linear probing
            if (idx == startIdx) {
                cout << "Hash table is full\n";
                return;
            }
        }
        table[idx] = key;
    }

    bool search(int key) {
        int idx = hash(key);
        int startIdx = idx;
        while (table[idx] != -1) {
            if (table[idx] == key) return true;
            idx = (idx + 1) % SIZE;
            if (idx == startIdx) break;
        }
        return false;
    }

    void display() {
        for (int i = 0; i < SIZE; i++) {
            if (table[i] != -1) cout << i << " -> " << table[i] << endl;
            else cout << i << " -> " << "empty" << endl;
        }
    }
};

int main() {
    HashTable ht;
    ht.insert(15);
    ht.insert(25);
    ht.insert(35);

    cout << "Hash Table contents:\n";
    ht.display();

    int key = 25;
    cout << key << (ht.search(key) ? " found\n" : " not found\n");

    return 0;
}
