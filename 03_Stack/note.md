# Stack（堆疊）

## 1. Definition（定義）

Stack（堆疊）是一種線性資料結構，由多個 **元素（Element）** 組成。  
遵循 **LIFO（Last In, First Out，後進先出）** 原則。  
元素的插入與刪除 **只能在同一端進行**，該端稱為 **Top（頂端）**。

---

## 2. Characteristics（特性）

| 特性 | 說明 |
|----|----|
| LIFO 原則 | 後進先出 |
| 單端操作 | 只能在 Top 進行插入與刪除 |
| 結構簡單 | 實作容易 |
| 存取受限 | 只能存取頂端元素 |

---

## 3. Time & Space Complexity（時間與空間複雜度）

### 時間複雜度（Time Complexity）

| 操作 | Big-O | 說明 |
|----|----|----|
| Push | O(1) | 插入至頂端 |
| Pop | O(1) | 移除頂端 |
| Peek / Top | O(1) | 讀取頂端 |
| Search | O(n) | 需逐一檢查元素 |

---

### 空間複雜度（Space Complexity）

| 實作方式 | 複雜度 |
|----|----|
| Array-based Stack | O(n) |
| Linked List Stack | O(n) |

---

## 4. Advantages & Disadvantages（優缺點）

### 優點
- Push / Pop 效率高（O(1)）
- 結構簡單
- 適合回溯（Backtracking）問題

### 缺點
- 無法隨機存取
- 不適合搜尋大量資料
- 使用陣列時大小受限

---

## 5. Use Cases（使用情境）

- 函式呼叫（Call Stack）
- 括號配對檢查
- 運算式轉換與計算（Infix / Postfix）
- Undo / Redo 功能
- 深度優先搜尋（DFS）

---

## 6. Common Problems for Beginners（初次學習可能遇到的問題）

### 1. Stack Overflow
使用陣列實作時，Push 超過容量但未檢查。

### 2. Stack Underflow
在 Stack 為空時仍執行 Pop。

### 3. Top 指標更新錯誤
Push / Pop 後未正確更新 `top`，導致資料錯亂。