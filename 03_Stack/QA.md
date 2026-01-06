## 03_Stack (堆疊)

- **Q1:** Stack 適合哪些演算法或系統場景？  
  **AI提示回答:**  
  - **系統:** 呼叫堆疊（Call Stack）、函數回溯、Undo/Redo。  
  - **演算法:** 括號匹配、DFS 遞迴改寫成迭代、表達式求值（中序→後序）。  

- **Q2:** 用 Array 或 Linked List 實作 Stack 有何差別？  
  **AI提示回答:**  
  - **Array:** push/pop O(1)，存取快，容量需預先或動態管理。  
  - **Linked List:** push/pop O(1)，動態大小，但每節點有額外指標空間。  
  → Array 適合固定或可擴容情況，Linked List 適合大小不確定、頻繁動態插入。

- **Q3:** Stack 在演算法題目中容易遇到的邊界問題？  
  **AI提示回答:**  
  - 空 stack pop 或 peek。  
  - Push 時超過容量（Array 堆疊）。  
  - 遞迴改寫成 Stack 迭代時需正確維護狀態。

- **Q4:** Stack 的時間與空間複雜度分析？  
  **AI提示回答:**  
  - **時間:** push/pop/peek O(1)  
  - **空間:** Array O(n)，Linked List O(n) + 指標額外空間。  
  - 適合短期暫存資料、遞迴展開。

## AI自我延伸問題

- **Q5:** Stack 的實務考題延伸？  
  **AI提示回答:**  
  - 使用兩個 stack 實作 queue（enqueue O(1) / dequeue O(n) 或反過來）  
  - 使用 stack 評估算術表達式（中序轉後序，後序求值）  
  - 結合圖演算法 DFS 或回溯問題。