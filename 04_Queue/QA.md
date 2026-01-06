## 04_Queue（佇列）

- **Q1:** 為什麼線性 Array Queue 的 dequeue 會是 O(n)？如何改善？  
  **AI提示回答:**  
  線性 Queue 在 dequeue 時需要將所有元素往前搬移，導致 O(n)。  
  改善方式是使用 **Circular Queue（循環佇列）**，透過 front / rear 指標循環使用陣列空間，使 enqueue 與 dequeue 都為 O(1)。

- **Q2:** Queue 與 Stack 在演算法設計上的核心差異？  
  **AI提示回答:**  
  Stack 偏向「回溯、遞迴、深度探索」；  
  Queue 偏向「層級、順序處理、廣度探索」，例如 BFS。

- **Q3:** Queue 在作業系統中的實際應用？  
  **AI提示回答:**  
  - CPU 排程（Ready Queue）  
  - I/O 緩衝  
  - 印表機佇列   
  - 多執行緒任務排程

- **Q4:** Deque（雙端佇列）為什麼比 Queue 彈性？  
  **AI提示回答:**  
  Deque 支援從頭尾插入與刪除，可同時實作 Stack 與 Queue，常用於滑動視窗（sliding window）問題。

  ## AI自我延伸問題

- **Q5:** Circular Queue 如何判斷「滿」與「空」？  
  **AI提示回答:**  
  - 空：`front == rear`  
  - 滿：`(rear + 1) % size == front`  
  為避免混淆，通常會浪費一格空間作為判斷。