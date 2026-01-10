# Heap（堆）

## 1. Definition（定義）

Heap 是一種 **完全二元樹（Complete Binary Tree）**，同時滿足 **Heap Property（堆性質）**：  

- **Max Heap（大根堆）**：每個父節點 ≥ 其子節點  
- **Min Heap（小根堆）**：每個父節點 ≤ 其子節點  

Heap 常用於優先隊列（Priority Queue）、排序演算法（如 Heap Sort）與資源排程。  

---

## 2. Characteristics（特性）

| 特性 | 說明 |
|----|----|
| 完全二元樹 | 除最底層外，每層節點都被填滿；最底層從左到右填充 |
| Heap Property | Max Heap 或 Min Heap，用於快速找最大/最小值 |
| 高度 | 完全二元樹高度 h = log₂(n) |
| 優先存取 | Root 節點是最大值或最小值 |
| Array Representation | 通常用陣列存儲，父子節點索引公式簡單：<br>Left = 2i+1, Right = 2i+2, Parent = (i-1)/2 |

---

## 3. Time & Space Complexity（時間與空間複雜度）

### 時間複雜度（Time Complexity）

| 操作 | Big-O | 說明 |
|----|----|----|
| Insert / Push | O(log n) | 需上浮（Up-heap / Bubble-up）維持堆性質 |
| Delete / Pop | O(log n) | 需下沉（Down-heap / Heapify）維持堆性質 |
| Peek / Top | O(1) | 直接讀取 Root 節點 |
| Build Heap | O(n) | 從無序陣列建堆，採 Heapify 方法 |

---

### 空間複雜度（Space Complexity）

| 實作方式 | 複雜度 |
|----|----|
| Array-based Heap | O(n) | 陣列存儲完全二元樹 |
| Linked Node Heap | O(n) | 每個節點額外指標（左右子節點），較少用於實務 |

---

## 4. Advantages & Disadvantages（優缺點）

### 優點
- 快速找最大值或最小值（O(1)）
- 插入 / 刪除效率高（O(log n)）
- 適合實作優先隊列（Priority Queue）

### 缺點
- 無法隨機存取任意元素
- 不是排序資料結構（需額外操作才能排序）
- Linked Node 實作效率較 Array 低，較少使用

---

## 5. Use Cases（使用情境）

- 優先隊列（Priority Queue）
- Heap Sort 排序演算法
- 作業系統排程 / 資源管理
- 圖演算法（如 Dijkstra、Prim）
- 緩衝區 / 資料流最大值或最小值維護

---

## 6. Common Problems for Beginners（初次學習可能遇到的問題）

### 1. Array vs Tree 表示混淆
- Heap 常用陣列表示，父子索引公式需熟悉  
- 初學者常用 Linked Node 思維操作陣列，容易出錯

### 2. Heapify 遞迴 / 上浮錯誤
- 插入或刪除後需要上浮（Bubble-up）或下沉（Heapify）  
- 初學者容易忘記比較父子值，破壞 Heap Property

### 4. 建堆效率誤解
- 從無序陣列 Build Heap 時， naive O(n log n) 方法效率低  
- 正確 Heapify 方法可達 O(n)，初學者常忽略

### 5. 排序與優先隊列應用陷阱
- Heap 本身不是排序結構，僅 Root 為最大/最小  
- 初學者使用 Heap 做排序或 BFS / Dijkstra 優先隊列時，容易誤用 Peek 而不是 Pop
