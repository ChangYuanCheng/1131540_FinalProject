#include <iostream>
#include <vector>
using namespace std;

class MinHeap {
private:
    vector<int> heap;

    void heapifyUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[index] < heap[parent]) {
                swap(heap[index], heap[parent]);
                index = parent;
            } else break;
        }
    }

    void heapifyDown(int index) {
        int left, right, smallest;
        while (true) {
            left = 2 * index + 1;
            right = 2 * index + 2;
            smallest = index;

            if (left < heap.size() && heap[left] < heap[smallest]) smallest = left;
            if (right < heap.size() && heap[right] < heap[smallest]) smallest = right;
            if (smallest != index) {
                swap(heap[index], heap[smallest]);
                index = smallest;
            } else break;
        }
    }

public:
    void insert(int val) {
        heap.push_back(val);
        heapifyUp(heap.size() - 1);
    }

    void pop() {
        if (heap.empty()) return;
        heap[0] = heap.back();
        heap.pop_back();
        heapifyDown(0);
    }

    int top() {
        if (heap.empty()) return -1;
        return heap[0];
    }

    void display() {
        for (int val : heap) cout << val << " ";
        cout << endl;
    }
};

int main() {
    MinHeap h;
    h.insert(30);
    h.insert(20);
    h.insert(10);
    h.insert(40);

    cout << "Heap elements: ";
    h.display();

    cout << "Top element: " << h.top() << endl;
    h.pop();
    cout << "After pop: ";
    h.display();

    return 0;
}
