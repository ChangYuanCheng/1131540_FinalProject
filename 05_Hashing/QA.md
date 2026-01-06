
## 05_Hashing（雜湊）

- **Q1:** 為什麼 Hash Table 的平均時間複雜度是 O(1)，但最壞是 O(n)？  
  **AI提示回答:**  
  若 hash function 分布均勻，collision 少 → 平均 O(1)。  
  若大量碰撞（所有 key 落在同一位置）→ 退化成 Linked List → O(n)。

- **Q2:** Load Factor 是什麼？為什麼重要？  
  **AI提示回答:**  
  Load Factor = `元素數量 / 表格大小`  
  過高會增加 collision，降低效能；通常超過 0.7 會進行 rehash。

- **Q3:** Chaining 與 Open Addressing 的核心差異？  
  **AI提示回答:**  
  - **Chaining:** 每個 bucket 是一條 Linked List，空間需求大但刪除容易  
  - **Open Addressing:** 所有元素存在表內，節省空間但刪除複雜

- **Q4:** Hash Table 為什麼不適合做排序？  
  **AI提示回答:**  
  Hash Table 本質是無序結構，不保證 key 的大小或插入順序。

## AI自我延伸問題

- **Q5:** Rehash 發生時，為什麼成本很高？  
  **AI提示回答:**  
  Rehash 需要建立新表，並將所有元素重新計算 hash 並插入，時間 O(n)，但屬於「低頻高成本」操作。