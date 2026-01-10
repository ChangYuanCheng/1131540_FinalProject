# Queue（佇列）

## 1. Definition（定義）

Queue（佇列）是一種線性資料結構，由多個 **元素（Element）** 組成。  
遵循 **FIFO（First In, First Out，先進先出）** 原則。  
元素的插入稱為 **Enqueue（入列）**，刪除稱為 **Dequeue（出列）**。  
插入發生在 **尾端（Rear）**，刪除發生在 **前端（Front）**。

---

## 2. Characteristics（特性）

| 特性 | 說明 |
|----|----|
| FIFO 原則 | 先進先出 |
| 雙端不同 | 插入在 Rear，刪除在 Front |
| 結構簡單 | 實作容易 |
| 存取受限 | 只能存取 Front 或 Rear 元素 |

---

## 3. Time & Space Complexity（時間與空間複雜度）

### 時間複雜度（Time Complexity）

| 操作 | Big-O | 說明 |
|----|----|----|
| Enqueue | O(1) | 插入至尾端 |
| Dequeue | O(1) | 刪除前端元素 |
| Peek / Front | O(1) | 讀取前端元素 |
| Search | O(n) | 需逐一檢查元素 |

---

### 空間複雜度（Space Complexity）

| 實作方式 | 複雜度 |
|----|----|
| Array-based Queue | O(n) |
| Linked List Queue | O(n) |

---

## 4. Advantages & Disadvantages（優缺點）

### 優點
- Enqueue / Dequeue 效率高（O(1)）
- 結構簡單
- 適合排隊與順序處理問題

### 缺點
- 無法隨機存取
- 使用陣列時可能造成 **假溢位（False Overflow）**
- 使用 Linked List 時額外指標消耗空間

---

## 5. Use Cases（使用情境）

- 排隊系統（Queueing System）
- 作業系統的任務排程
- 廣度優先搜尋（BFS）
- 緩衝區（Buffer）管理
- 資料流處理（如 IO Queue）

---

## 6. Common Problems for Beginners（初次學習可能遇到的問題）

### 1️⃣ 指標/索引混亂
- 使用陣列實作時，Front、Rear 指標容易搞混  
- 例如：Front 指向隊首元素，Rear 指向下一個可插入位置  
- 初學者可能誤以為 Front/Rear 都指向元素本身，導致刪除或插入錯誤

### 2️⃣ Queue Overflow（溢位）與假溢位
- 固定大小陣列超過容量時未檢查，造成溢位  
- 循環隊列 (Circular Queue) 的 Front = Rear 情況容易誤判為溢位或空隊列  
- 初學者常忽略 modulo 運算更新 Rear，導致插入失敗

### 3️⃣ Queue Underflow（空隊列操作）
- 在空隊列執行 Dequeue 或 Peek  
- Linked List Queue 若未檢查 head，會 dereference 空指標  
- 初學者常忘記在 Dequeue 後更新 Front，導致無限循環或資料錯亂