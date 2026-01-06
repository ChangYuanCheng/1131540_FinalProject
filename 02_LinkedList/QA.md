## 02_LinkedList (鏈結串列)

- **Q1:** Linked List 為什麼不適合快速隨機存取？  
  **AI提示回答:**  
  - 節點不連續記憶體，每次訪問需從頭遍歷，存取任意索引元素 O(n)；不如 Array O(1)。

- **Q2:** Linked List 在實務應用的記憶體效率問題？  
  **AI提示回答:**  
  - 每個節點需額外指標空間，尤其 Doubly List 額外佔用 2x 空間；  
  - 若元素很小（如 char 或 int），指標開銷可能比數據本身大。

- **Q3:** 如何使用 Linked List 實作 Stack 或 Queue？  
  **AI提示回答:**  
  - **Stack:** push/pop 對應頭部插入/刪除 O(1)。  
  - **Queue:** head 出隊 O(1)，tail 入隊 O(1)，需保留 head + tail 指標。

- **Q4:** Linked List 遇到資料結構題目常見陷阱？  
  **AI提示回答:**  
  - 忘記處理空鏈表或單節點鏈表。  
  - 刪除節點時沒正確更新 prev/next 指標。  
  - 環形鏈表容易造成無窮迴圈。  
  → 測試邊界情況非常重要。

# AI自我延伸問題

- **Q5:** Singly、Doubly、Circular Linked List 的差異與應用？  
  **AI提示回答:**  
  - **Singly:** 只有 next 指標，插入刪除前節點已知時 O(1)，空間少；遍歷單向。  
  - **Doubly:** next + prev，插入刪除任意節點 O(1)，空間多一倍；遍歷雙向。  
  - **Circular:** 最後節點指向頭節點，方便迴圈訪問，例如操作系統的 Round-Robin 排程。
