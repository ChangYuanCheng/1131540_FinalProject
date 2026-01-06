#include <iostream>
using namespace std;

#define MAX 5 

class Stack {
private:
    int arr[MAX];
    int top;    // 指向目前最上面的元素

public:
    Stack() {
        top = -1;   // 空 stack 的初始狀態
    }

    /*
     push：
     將元素放入 stack 頂端
     - 先檢查是否滿了
     - 時間複雜度 O(1)
    */
    void push(int x) {
        if (top == MAX - 1) {
            cout << "Stack overflow\n";
            return;
        }
        arr[++top] = x;
    }

    /*
     pop：
     移除 stack 頂端元素
     - 先檢查是否為空
     - 時間複雜度 O(1)
    */
    void pop() {
        if (top == -1) {
            cout << "Stack underflow\n";
            return;
        }
        top--;
    }

    int peek() {
        if (top == -1) return -1;
        return arr[top];
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;
    s.pop();
    cout << "After pop, top: " << s.peek() << endl;

    return 0;
}
