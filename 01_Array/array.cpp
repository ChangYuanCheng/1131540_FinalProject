#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; //靜態陣列（Static Array）— 大小固定

    //AI QA:Array 在本質上大小是固定的，因為它使用連續記憶體。
    //不過在實務中，我們會使用像 C++ vector 這樣的動態陣列，透過重新配置與搬移資料，來模擬可變大小的行為
    cout << "arr[2] = " << arr[2] << endl;

    int size = 5;
    for (int i = size - 1; i > 2; i--) {
        arr[i] = arr[i - 1];
    }
    arr[2] = 25;

    cout << "After insertion: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
