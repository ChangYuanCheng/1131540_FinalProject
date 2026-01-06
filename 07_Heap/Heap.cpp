//Heap 是一種完全二元樹，常用來實作 Priority Queue
// 插入與刪除的時間複雜度為 O(log n)
#include <iostream>
using namespace std;

class MaxHeap {
private:
    int heap[100];
    int size;

public:
    MaxHeap() {
        size = 0;
    }

    /*
     insert：
     - 將新元素放在最後
     - 向上調整（heapify up）
    */
    void insert(int val) {
        int i = size;
        heap[i] = val;
        size++;

        while (i != 0 && heap[(i - 1) / 2] < heap[i]) {
            swap(heap[i], heap[(i - 1) / 2]);
            i = (i - 1) / 2;
        }
    }

    void display() {
        for (int i = 0; i < size; i++)
            cout << heap[i] << " ";
    }
};

int main() {
    MaxHeap h;
    h.insert(10);
    h.insert(30);
    h.insert(20);
    h.insert(5);

    h.display();
    return 0;
}
