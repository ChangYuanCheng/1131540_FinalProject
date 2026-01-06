#include <iostream>
using namespace std;

#define MAX 5

class Queue {
private:
    int arr[MAX];
    int front, rear;

public:
    Queue() {
        front = rear = 0;   // 空佇列狀態
    }

    /*
     enqueue：
     在尾端加入元素
     - 使用循環方式避免空間浪費
     - 時間複雜度 O(1)
    */
    void enqueue(int x) {
        if ((rear + 1) % MAX == front) {
            cout << "Queue is full\n";
            return;
        }
        arr[rear] = x;
        rear = (rear + 1) % MAX;
    }

    /*
     dequeue：
     從前端移除元素
     - 不需搬移資料
     - 時間複雜度 O(1)
    */
    void dequeue() {
        if (front == rear) {
            cout << "Queue is empty\n";
            return;
        }
        front = (front + 1) % MAX;
    }

    int getFront() {
        if (front == rear) return -1;
        return arr[front];
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.getFront() << endl;
    q.dequeue();
    cout << "After dequeue, front: " << q.getFront() << endl;

    return 0;
}
