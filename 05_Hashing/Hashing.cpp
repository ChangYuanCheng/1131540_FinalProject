//Binay Search Tree

#include <iostream>
using namespace std;

#define SIZE 7   // Hash table 大小"通常選質數"

class HashTable {
private:
    int table[SIZE];

public:
    HashTable() {
        for (int i = 0; i < SIZE; i++)
            table[i] = -1;
    }

    /*
     hash function：
     將 key 映射到 table index
     - 簡單示範：key % SIZE
    */
    int hashFunction(int key) {
        return key % SIZE;
    }

    /*
     insert：
     - 若碰撞（collision），使用 linear probing
     - 平均時間 O(1)，最差 O(n)
    */
    void insert(int key) {
        int index = hashFunction(key);

        // 發生 collision，就往後找空位
        while (table[index] != -1) {
            index = (index + 1) % SIZE;
        }
        table[index] = key;
    }

    void display() {
        for (int i = 0; i < SIZE; i++) {
            cout << i << ": " << table[i] << endl;
        }
    }
};

int main() {
    HashTable ht;
    ht.insert(10);
    ht.insert(21);  // 10 % 7 = 3, 21 % 7 = 0
    ht.insert(17);  // 17 % 7 = 3 → collision

    ht.display();
    return 0;
}
